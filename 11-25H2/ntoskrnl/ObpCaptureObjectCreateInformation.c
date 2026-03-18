/*
 * XREFs of ObpCaptureObjectCreateInformation @ 0x14085C5F0
 * Callers:
 *     ObCreateObject @ 0x140858920 (ObCreateObject.c)
 *     IopAllocRealFileObject @ 0x14085A290 (IopAllocRealFileObject.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 *     CmpCreateKeyBody @ 0x14089EB50 (CmpCreateKeyBody.c)
 *     NtCreateSemaphore @ 0x14089F4E0 (NtCreateSemaphore.c)
 *     NtCreateEvent @ 0x14089FF70 (NtCreateEvent.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     ObReferenceObjectByNameEx @ 0x140914400 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ObpCaptureObjectName @ 0x14085C910 (ObpCaptureObjectName.c)
 *     SeCaptureSecurityDescriptor @ 0x14092A4A0 (SeCaptureSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCaptureObjectCreateInformation(
        unsigned __int8 a1,
        char a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        unsigned int a6)
{
  _OWORD *v6; // r11
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // r14d
  void *v14; // rcx
  _QWORD *v15; // r13
  _BYTE *v16; // rax
  unsigned int v17; // ecx
  __int16 v18; // dx
  __int64 v19; // r8
  _BYTE *v20; // r8
  __int64 v21; // rdx
  _BYTE *v22; // rdx
  _OWORD *v23; // [rsp+C8h] [rbp+20h]

  v23 = a4;
  v6 = a4;
  *a4 = 0LL;
  *(_OWORD *)a5 = 0LL;
  *(_OWORD *)(a5 + 16) = 0LL;
  *(_OWORD *)(a5 + 32) = 0LL;
  *(_OWORD *)(a5 + 48) = 0LL;
  if ( !a3 )
    return 0LL;
  *(_BYTE *)(a5 + 16) = a1;
  if ( a1 && KeGetCurrentThread()->PreviousMode && (a3 & 7) != 0 )
LABEL_14:
    ExRaiseDatatypeMisalignment();
  if ( *(_DWORD *)a3 == 48 )
  {
    *(_QWORD *)(a5 + 8) = *(_QWORD *)(a3 + 8);
    v8 = *(_DWORD *)(a3 + 24);
    if ( a2 )
      v8 &= ~0x200u;
    if ( (v8 & 0xFFFEE00D) != 0 )
    {
      v12 = -1073741811;
    }
    else
    {
      *(_DWORD *)a5 = v8;
      v9 = *(_QWORD *)(a3 + 16);
      v10 = *(_QWORD *)(a3 + 32);
      v11 = *(_QWORD *)(a3 + 40);
      if ( v11 )
      {
        if ( a1 )
        {
          if ( KeGetCurrentThread()->PreviousMode && (v11 & 3) != 0 )
            goto LABEL_14;
          v10 = *(_QWORD *)(a3 + 32);
          v9 = *(_QWORD *)(a3 + 16);
        }
        *(_QWORD *)(a5 + 48) = *(_QWORD *)v11;
        *(_DWORD *)(a5 + 56) = *(_DWORD *)(v11 + 8);
      }
      if ( v10 )
      {
        v15 = (_QWORD *)(a5 + 32);
        LOBYTE(a4) = 1;
        v12 = SeCaptureSecurityDescriptor(v10, a1, 1, (_DWORD)a4, a5 + 32);
        if ( v12 < 0 )
        {
          *v15 = 0LL;
          goto LABEL_30;
        }
        v16 = (_BYTE *)*v15;
        v17 = 0;
        if ( *(_BYTE *)*v15 == 1 )
        {
          v18 = *((_WORD *)v16 + 1);
          if ( v18 >= 0 )
          {
            v20 = (_BYTE *)*((_QWORD *)v16 + 2);
          }
          else
          {
            v19 = *((unsigned int *)v16 + 2);
            if ( (_DWORD)v19 )
              v20 = &v16[v19];
            else
              v20 = 0LL;
          }
          if ( (v18 & 4) != 0 )
          {
            if ( v18 >= 0 )
            {
              v22 = (_BYTE *)*((_QWORD *)v16 + 4);
            }
            else
            {
              v21 = *((unsigned int *)v16 + 4);
              if ( (_DWORD)v21 )
                v22 = &v16[v21];
              else
                v22 = 0LL;
            }
          }
          else
          {
            v22 = 0LL;
          }
          if ( v20 )
            v17 = (4 * (unsigned __int8)v20[1] + 11) & 0xFFFFFFFC;
          if ( v22 )
            v17 += (*((unsigned __int16 *)v22 + 1) + 3) & 0xFFFFFFFC;
        }
        *(_DWORD *)(a5 + 28) = v17;
        v6 = v23;
      }
      if ( !v11 )
        goto LABEL_22;
      *(_DWORD *)(a5 + 48) = 12;
      *(_QWORD *)(a5 + 40) = a5 + 48;
      if ( *(_BYTE *)(a5 + 56) >= 2u )
      {
        v12 = -1073741811;
        goto LABEL_30;
      }
      if ( *(_DWORD *)(a5 + 52) > 3u )
      {
        v12 = -1073741659;
      }
      else
      {
LABEL_22:
        if ( v9 )
        {
          v12 = ObpCaptureObjectName(a1, v9, v6, a6);
          if ( v12 >= 0 )
            return 0LL;
        }
        else
        {
          if ( !*(_QWORD *)(a5 + 8) )
            return 0LL;
          v12 = -1073741773;
        }
      }
    }
  }
  else
  {
    v12 = -1073741811;
  }
LABEL_30:
  v14 = *(void **)(a5 + 32);
  if ( v14 )
  {
    if ( *(_BYTE *)(a5 + 16) <= 1u )
      ExFreePoolWithTag(v14, 0);
    *(_QWORD *)(a5 + 32) = 0LL;
  }
  return (unsigned int)v12;
}
