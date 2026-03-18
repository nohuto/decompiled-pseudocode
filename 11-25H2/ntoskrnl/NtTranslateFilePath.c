/*
 * XREFs of NtTranslateFilePath @ 0x140820680
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExpTranslateArcPath @ 0x1407ADBEC (ExpTranslateArcPath.c)
 *     ExpVerifyFilePath @ 0x140821120 (ExpVerifyFilePath.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     ExpTranslateEfiPath @ 0x140A6183C (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x140AD1DB8 (ExpTranslateNtPath.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtTranslateFilePath(char *Src, unsigned int a2, volatile void *a3, unsigned int *a4)
{
  KPROCESSOR_MODE v8; // dl
  unsigned __int64 v9; // r15
  __int64 v10; // rcx
  unsigned int v11; // r15d
  unsigned int v12; // ecx
  unsigned int v13; // edi
  _DWORD *Pool2; // rax
  _DWORD *v15; // r14
  void *v16; // rsi
  unsigned int v17; // eax
  int v19; // ebx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  KPROCESSOR_MODE PreviousMode[10]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v27; // [rsp+2Ch] [rbp-5Ch]
  PVOID v28; // [rsp+30h] [rbp-58h]
  PVOID P; // [rsp+38h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-38h]

  *(_DWORD *)&PreviousMode[4] = 0;
  P = 0LL;
  v28 = 0LL;
  if ( dword_140EFE810 != 2 )
    return 3221225474LL;
  if ( a2 - 1 <= 4 )
  {
    if ( !PsIsCurrentThreadInServerSilo() )
    {
      CurrentThread = KeGetCurrentThread();
      v8 = CurrentThread->PreviousMode;
      PreviousMode[0] = v8;
      v9 = (unsigned __int64)(Src + 4);
      v10 = 0x7FFFFFFF0000LL;
      if ( v8 )
      {
        if ( v9 >= 0x7FFFFFFF0000LL )
          v9 = 0x7FFFFFFF0000LL;
        v11 = *(_DWORD *)v9;
        v27 = v11;
        v8 = PreviousMode[0];
      }
      else
      {
        v11 = *(_DWORD *)v9;
        v27 = v11;
      }
      if ( v11 < 0xC )
        return 3221225485LL;
      if ( v8 )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
          v10 = (__int64)a4;
        *(_DWORD *)v10 = *(_DWORD *)v10;
        v13 = *a4;
        *(_DWORD *)&PreviousMode[4] = v13;
        v17 = v13;
        if ( !a3 )
        {
          v13 = 0;
          *(_DWORD *)&PreviousMode[4] = 0;
          v17 = 0;
        }
        if ( v17 )
          ProbeForWrite(a3, v17, 4u);
        if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode[0]) )
          return 3221225569LL;
        v11 = v27;
      }
      else
      {
        v12 = *a4;
        v13 = a3 != 0LL ? *a4 : 0;
        *(_DWORD *)&PreviousMode[4] = a3 != 0LL ? v12 : 0;
      }
      Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
      v15 = Pool2;
      P = Pool2;
      if ( !Pool2 )
        return 3221225626LL;
      memmove(Pool2, Src, v11);
      v15[1] = v11;
      if ( v13 )
      {
        v16 = (void *)ExAllocatePool2(0x40uLL);
        v28 = v16;
        if ( !v16 )
        {
          ExFreePoolWithTag(v15, 0);
          P = 0LL;
          return 3221225626LL;
        }
      }
      else
      {
        v16 = 0LL;
        v28 = 0LL;
      }
      v19 = ExpVerifyFilePath(v15);
      if ( v19 >= 0 )
      {
        v20 = v15[2];
        if ( a2 == v20 )
        {
          if ( v13 < v11 )
            v19 = -1073741789;
          else
            memmove(v16, v15, v11);
          v13 = v11;
          *(_DWORD *)&PreviousMode[4] = v11;
        }
        else
        {
          v21 = v20 - 1;
          if ( v21 && (v22 = v21 - 1) != 0 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              if ( v23 != 1 )
              {
                v19 = -1073741811;
                goto LABEL_32;
              }
              v24 = ExpTranslateEfiPath(v15, a2, v16, &PreviousMode[4]);
            }
            else
            {
              v24 = ExpTranslateNtPath(v15, a2, v16, &PreviousMode[4], *(_QWORD *)PreviousMode);
            }
          }
          else
          {
            v24 = ExpTranslateArcPath((__int64)v15, a2, v16, (__int64)&PreviousMode[4]);
          }
          v19 = v24;
          v13 = *(_DWORD *)&PreviousMode[4];
        }
      }
LABEL_32:
      ExFreePoolWithTag(v15, 0);
      if ( v19 >= 0 )
      {
        if ( !v16 )
        {
LABEL_37:
          *a4 = v13;
          return (unsigned int)v19;
        }
        memmove((void *)a3, v16, v13);
      }
      if ( v16 )
      {
        ExFreePoolWithTag(v16, 0);
        v28 = 0LL;
      }
      goto LABEL_37;
    }
    return 3221225474LL;
  }
  return 3221225485LL;
}
