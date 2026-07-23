/*
 * XREFs of DbgkpPostModuleMessages @ 0x140A4772C
 * Callers:
 *     DbgkCreateThread @ 0x14090B274 (DbgkCreateThread.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1409BA9F8 (DbgkpPostFakeProcessCreateMessages.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     DbgkPostModuleMessage @ 0x140484DC4 (DbgkPostModuleMessage.c)
 *     PsGetProcessEnclaveModuleInfo @ 0x1404C00D0 (PsGetProcessEnclaveModuleInfo.c)
 *     PsFreeEnclaveModuleInfo @ 0x1404C0310 (PsFreeEnclaveModuleInfo.c)
 *     DbgkPostEnclaveModuleMessages @ 0x14057B20C (DbgkPostEnclaveModuleMessages.c)
 *     VslSendDebugAttachNotifications @ 0x140704264 (VslSendDebugAttachNotifications.c)
 */

void __fastcall DbgkpPostModuleMessages(__int64 a1, void *a2, struct _KEVENT *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // r8
  _QWORD *v8; // rcx
  _QWORD *v9; // r9
  unsigned int v10; // eax
  int v11; // edx
  PIMAGE_NT_HEADERS v12; // rax
  int PointerToSymbolTable; // r9d
  int NumberOfSymbols; // eax
  __int64 v15; // rcx
  __int16 v16; // ax
  unsigned int *v18; // r8
  unsigned int *v19; // rcx
  unsigned int *v20; // r9
  unsigned int v21; // eax
  int v22; // edx
  PIMAGE_NT_HEADERS v23; // rax
  int v24; // r9d
  int v25; // ecx
  int v26; // edi
  char *v27; // rsi
  __int64 v28; // r12
  unsigned int v29; // [rsp+30h] [rbp-78h]
  unsigned int v30; // [rsp+30h] [rbp-78h]
  int v31; // [rsp+34h] [rbp-74h]
  int v32; // [rsp+34h] [rbp-74h]
  PVOID BaseOfImage; // [rsp+38h] [rbp-70h]
  PVOID BaseOfImagea; // [rsp+38h] [rbp-70h]
  _QWORD *v35; // [rsp+40h] [rbp-68h]
  PVOID P; // [rsp+48h] [rbp-60h] BYREF
  _QWORD *v37; // [rsp+50h] [rbp-58h]
  _QWORD *v38; // [rsp+58h] [rbp-50h]
  unsigned int *v39; // [rsp+60h] [rbp-48h]
  unsigned int *v40; // [rsp+B0h] [rbp+8h]
  unsigned int *v41; // [rsp+C8h] [rbp+20h] BYREF

  P = 0LL;
  LODWORD(v41) = 0;
  if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
  {
    VslSendDebugAttachNotifications(a1, (__int64)a2, (__int64)a3);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 736);
    if ( v6 )
    {
      v37 = (_QWORD *)(*(_QWORD *)(v6 + 24) + 16LL);
      v7 = v37;
      v8 = (_QWORD *)*v37;
      v35 = (_QWORD *)*v37;
      v9 = v37;
      v38 = v37;
      v10 = 0;
      v29 = 0;
      v11 = 0;
      v31 = 0;
      while ( v8 != v7 && v8 != v9 && v10 != -1 )
      {
        if ( v10 > 1 )
        {
          BaseOfImage = (PVOID)v35[6];
          v12 = RtlImageNtHeader(BaseOfImage);
          if ( v12 )
          {
            PointerToSymbolTable = v12->FileHeader.PointerToSymbolTable;
            NumberOfSymbols = v12->FileHeader.NumberOfSymbols;
          }
          else
          {
            PointerToSymbolTable = 0;
            NumberOfSymbols = 0;
          }
          DbgkPostModuleMessage((PVOID)a1, a2, BaseOfImage, PointerToSymbolTable, NumberOfSymbols, a3);
          v8 = v35;
          v10 = v29;
          v11 = v31;
        }
        if ( v10 == v11 )
        {
          v38 = v8;
          v31 = 2 * v11 + 2;
        }
        v8 = (_QWORD *)*v35;
        v35 = (_QWORD *)*v35;
        v10 = ++v29;
        v7 = v37;
        v9 = v38;
        v11 = v31;
      }
    }
    if ( (int)PsGetProcessEnclaveModuleInfo(a1, &P, (unsigned int *)&v41) >= 0 )
    {
      v26 = (int)v41;
      if ( (_DWORD)v41 )
      {
        v27 = (char *)P;
        v28 = (unsigned int)v41;
        do
        {
          DbgkPostEnclaveModuleMessages((void *)a1, a2, a3, *(_QWORD *)v27, *((_DWORD *)v27 + 2));
          v27 += 16;
          --v28;
        }
        while ( v28 );
      }
      PsFreeEnclaveModuleInfo((char *)P, v26);
    }
    v15 = *(_QWORD *)(a1 + 784);
    if ( v15 )
    {
      v16 = *(_WORD *)(a1 + 1772);
      if ( v16 == 332 || v16 == 452 )
      {
        v41 = (unsigned int *)(*(unsigned int *)(*(_QWORD *)v15 + 12LL) + 12LL);
        v18 = v41;
        v19 = (unsigned int *)*v41;
        v40 = v19;
        v20 = v41;
        v39 = v41;
        v21 = 0;
        v30 = 0;
        v22 = 0;
        v32 = 0;
        while ( v19 != v18 && v19 != v20 && v21 != -1 )
        {
          if ( v21 > 1 )
          {
            BaseOfImagea = (PVOID)v40[6];
            v23 = RtlImageNtHeader(BaseOfImagea);
            if ( v23 )
            {
              v24 = v23->FileHeader.PointerToSymbolTable;
              v25 = v23->FileHeader.NumberOfSymbols;
            }
            else
            {
              v24 = 0;
              v25 = 0;
            }
            DbgkPostModuleMessage((PVOID)a1, a2, BaseOfImagea, v24, v25, a3);
            v21 = v30;
            v22 = v32;
            v19 = v40;
          }
          if ( v21 == v22 )
          {
            v39 = v19;
            v32 = 2 * v22 + 2;
          }
          v19 = (unsigned int *)*v40;
          v40 = v19;
          v21 = ++v30;
          v22 = v32;
          v18 = v41;
          v20 = v39;
        }
      }
    }
  }
}
