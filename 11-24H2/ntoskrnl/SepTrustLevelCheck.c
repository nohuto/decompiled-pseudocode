/*
 * XREFs of SepTrustLevelCheck @ 0x140357F50
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x14091DB90 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x1403599E0 (RtlIsValidProcessTrustLabelSid.c)
 *     SeLockSubjectContext @ 0x140868470 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408684D0 (SeUnlockSubjectContext.c)
 */

__int64 __fastcall SepTrustLevelCheck(
        __int64 a1,
        __int64 a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        __int64 a4,
        __int64 a5,
        char a6,
        int *a7)
{
  __int16 v7; // di
  unsigned int v8; // ebx
  char v9; // r15
  unsigned int v13; // r10d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // esi
  __int64 v19; // rdi
  _QWORD *PrimaryToken; // rax
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r9
  struct _KTHREAD *CurrentThread; // rax

  v7 = *(_WORD *)(a2 + 2);
  v8 = 0;
  v9 = 0;
  v13 = 0;
  if ( (v7 & 0x10) == 0 )
    goto LABEL_14;
  while ( 2 )
  {
    if ( v7 >= 0 )
    {
      v15 = *(_QWORD *)(a2 + 24);
    }
    else
    {
      v14 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v14 )
        break;
      v15 = a2 + v14;
    }
    if ( v15 )
    {
      v16 = v15 + 8;
      v17 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v17 >= *(unsigned __int16 *)(v15 + 4) )
          goto LABEL_14;
        if ( (unsigned int)v17 >= v13 && *(_BYTE *)v16 == 20 )
          break;
        v17 = (unsigned int)(v17 + 1);
        v16 += *(unsigned __int16 *)(v16 + 2);
      }
      if ( (*(_BYTE *)(v16 + 1) & 8) != 0 )
      {
        v13 = v17 + 1;
        if ( v16 )
          continue;
      }
      if ( !v16 )
        break;
      v18 = *(_DWORD *)(v16 + 4);
      v19 = v16 + 8;
      if ( v16 == -8 )
        break;
      if ( a6 )
      {
        if ( a4 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(*(PERESOURCE *)(a4 + 48), 1u);
        }
        else
        {
          SeLockSubjectContext(a3);
        }
        v9 = 1;
      }
      if ( !a4 )
      {
        if ( a3->ClientToken )
        {
          PrimaryToken = a3->PrimaryToken;
          v22 = *((_QWORD *)a3->ClientToken + 138);
          if ( PrimaryToken[138] && !(unsigned __int8)RtlIsValidProcessTrustLabelSid(PrimaryToken[138], v17, v22) )
          {
            v8 = -1073741811;
            goto LABEL_28;
          }
          if ( !v22 )
          {
LABEL_23:
            if ( (unsigned __int8)RtlIsValidProcessTrustLabelSid(v19, v17, v22) )
            {
              if ( v23 )
              {
                if ( *(_DWORD *)(v23 + 8) >= *(_DWORD *)(v19 + 8) && *(_DWORD *)(v23 + 12) >= *(_DWORD *)(v19 + 12) )
                  goto LABEL_27;
              }
              else if ( !*(_DWORD *)(v19 + 8) )
              {
LABEL_27:
                *a7 = -1;
                goto LABEL_28;
              }
              *a7 = v18 | 0x1000000;
            }
            else
            {
              v8 = -1073741811;
            }
LABEL_28:
            if ( v9 )
            {
              if ( a4 )
              {
                ExReleaseResourceLite(*(PERESOURCE *)(a4 + 48));
                KeLeaveCriticalRegionThread();
              }
              else
              {
                SeUnlockSubjectContext(a3);
              }
            }
            return v8;
          }
          if ( !(unsigned __int8)RtlIsValidProcessTrustLabelSid(v22, v17, v22) )
          {
            v8 = -1073741811;
            goto LABEL_28;
          }
          if ( v24 )
          {
            if ( *(_DWORD *)(v24 + 8) < *(_DWORD *)(v22 + 8) || *(_DWORD *)(v24 + 12) < *(_DWORD *)(v22 + 12) )
              goto LABEL_46;
LABEL_33:
            if ( v22 && !(unsigned __int8)RtlIsValidProcessTrustLabelSid(v22, v17, v22) )
            {
              v8 = -1073741811;
              goto LABEL_28;
            }
            goto LABEL_23;
          }
          if ( !*(_DWORD *)(v22 + 8) )
            goto LABEL_33;
        }
LABEL_46:
        v22 = *((_QWORD *)a3->PrimaryToken + 138);
        goto LABEL_33;
      }
      v22 = a5;
      goto LABEL_33;
    }
    break;
  }
LABEL_14:
  *a7 = -1;
  return v8;
}
