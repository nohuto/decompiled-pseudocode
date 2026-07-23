/*
 * XREFs of EtwpTraceHandle @ 0x140848E7C
 * Callers:
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 * Callees:
 *     EtwpTraceKernelEventWithFilter @ 0x140487710 (EtwpTraceKernelEventWithFilter.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpTraceHandle(__int16 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  int v6; // r12d
  unsigned int v8; // r9d
  bool v10; // zf
  __int64 v11; // r10
  unsigned int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int16 *v15; // r11
  unsigned int v16; // ebx
  unsigned int v17; // r8d
  __int64 v18; // rax
  char v19; // cl
  __int16 v20; // ax
  _WORD *Pool2; // rbx
  __int16 v22; // r14
  __int64 v23; // rax
  int v24; // r8d
  int NameStringMode; // eax
  int v26; // ecx
  __int64 v27; // rax
  unsigned int i; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v29; // [rsp+34h] [rbp-CCh]
  _DWORD v30[2]; // [rsp+38h] [rbp-C8h]
  _DWORD v31[2]; // [rsp+40h] [rbp-C0h]
  __int128 v32; // [rsp+48h] [rbp-B8h] BYREF
  __int128 *v33; // [rsp+58h] [rbp-A8h] BYREF
  int v34; // [rsp+60h] [rbp-A0h]
  int v35; // [rsp+64h] [rbp-9Ch]
  __int64 v36; // [rsp+68h] [rbp-98h]
  int v37; // [rsp+70h] [rbp-90h]
  int v38; // [rsp+74h] [rbp-8Ch]
  _BYTE P[272]; // [rsp+90h] [rbp-70h] BYREF

  i = 0;
  v5 = 0;
  v6 = *(_DWORD *)(a4 + 192);
  v30[0] = 0;
  v8 = *(_DWORD *)(EtwpHostSiloState + 4520);
  v10 = !_BitScanForward((unsigned int *)&v11, v8);
  v29 = a1;
  v32 = 0LL;
  if ( !v10 )
  {
    v12 = 1;
    do
    {
      v8 &= v8 - 1;
      v13 = 32LL * (unsigned int)v11 + EtwpHostSiloState + 4556;
      if ( v13 && (*(_DWORD *)(v13 + 16) & 0x40) != 0 )
      {
        v14 = 0LL;
        v15 = (unsigned __int16 *)((char *)&EtwpObjectTypeFilter + 20 * v11);
        v16 = *v15;
LABEL_6:
        if ( (unsigned int)v14 < v16 )
        {
          v17 = 0;
          v18 = 0LL;
          v31[0] = *(_DWORD *)&v15[2 * v14 + 2];
          v30[0] = v6;
          while ( v17 < 4 )
          {
            v19 = *((_BYTE *)v31 + v18);
            if ( v19 != 63 )
            {
              if ( v19 == 42 )
                break;
              if ( *((_BYTE *)v30 + v18) != v19 )
              {
                v14 = (unsigned int)(v14 + 1);
                goto LABEL_6;
              }
            }
            ++v17;
            ++v18;
          }
          v5 |= 1 << v11;
        }
      }
      v10 = !_BitScanForward((unsigned int *)&v11, v8);
    }
    while ( !v10 );
    if ( v5 )
    {
      v20 = *(unsigned __int8 *)(a4 + 40);
      Pool2 = P;
      v35 = 0;
      v22 = v29;
      WORD6(v32) = v20;
      v33 = &v32;
      *(_QWORD *)&v32 = a3;
      DWORD2(v32) = a2;
      v34 = 14;
      if ( v29 == 4385 )
      {
        v24 = 272;
        for ( i = 272; ; v24 = i )
        {
          NameStringMode = ObQueryNameStringMode(a3, (_DWORD)Pool2, v24, (unsigned int)&i, 0);
          if ( NameStringMode != -1073741820 )
            break;
          if ( Pool2 != (_WORD *)P )
            ExFreePoolWithTag(Pool2, 0);
          Pool2 = (_WORD *)ExAllocatePool2(0x100uLL, i, 0x74777445u);
          if ( !Pool2 )
            goto LABEL_19;
        }
        if ( !NameStringMode )
        {
          v26 = 0x2000;
          if ( *Pool2 < 0x2000u )
            v26 = (unsigned __int16)*Pool2;
          v27 = *((_QWORD *)Pool2 + 1);
          v12 = 2;
          v38 = 0;
          v36 = v27;
          v37 = v26;
        }
      }
LABEL_19:
      v23 = 2LL * v12;
      *(&v35 + 2 * v23) = 0;
      (&v33)[v23] = (__int128 *)&EtwpNull;
      *(&v34 + 2 * v23) = 2;
      EtwpTraceKernelEventWithFilter((__int64)&v33, v12 + 1, v5, v22, 0x10601902u);
      if ( Pool2 )
      {
        if ( Pool2 != (_WORD *)P )
          ExFreePoolWithTag(Pool2, 0);
      }
    }
  }
}
