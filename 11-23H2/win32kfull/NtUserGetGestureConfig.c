/*
 * XREFs of NtUserGetGestureConfig @ 0x1C01D0A00
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     GetGestureConfigSettings @ 0x1C0203D20 (GetGestureConfigSettings.c)
 */

__int64 __fastcall NtUserGetGestureConfig(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        volatile void *Address,
        int a6)
{
  int v7; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagWND *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  int GestureConfigSettings; // ebx
  struct tagTHREADINFO *v15; // rax
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rbx
  size_t v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  void *v25; // rdi
  __int64 v26; // r8
  __int64 CurrentProcessWow64Process; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _BYTE v33[4]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-74h]
  void *v35; // [rsp+38h] [rbp-70h]
  __int128 v36; // [rsp+68h] [rbp-40h] BYREF
  __int64 v37; // [rsp+78h] [rbp-30h]

  v7 = a3;
  v35 = 0LL;
  v34 = 0;
  v36 = 0LL;
  v37 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v33);
  v11 = (struct tagWND *)ValidateHwnd(a1);
  if ( v11 )
  {
    v15 = PtiCurrentShared(v10, v9, v12, v13);
    *(_QWORD *)&v36 = *((_QWORD *)v15 + 52);
    *((_QWORD *)v15 + 52) = &v36;
    *((_QWORD *)&v36 + 1) = v11;
    HMLockObject(v11);
    if ( a6 == 12 )
    {
      if ( (v7 & 0xFFFFFFFE) != 0 )
      {
        UserSetLastError(1004);
        GestureConfigSettings = 0;
LABEL_21:
        ThreadUnlock1(v18, v17, v19);
        goto LABEL_22;
      }
      v20 = *((_QWORD *)v11 + 5);
      if ( *(char *)(v20 + 20) < 0 || *(char *)(v20 + 19) < 0 )
      {
        v16 = 1400;
        goto LABEL_20;
      }
      if ( Address )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (unsigned int *)MmUserProbeAddress;
        v34 = *a4;
        v21 = v34;
        if ( v34 - 1 <= 0xFF )
        {
          v22 = 12 * v34;
          v25 = (void *)Win32AllocPoolWithQuotaZInit(v22, 1667724117LL);
          v35 = v25;
          if ( v25 )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v24, v23, v26);
            ProbeForWrite(Address, 12 * v21, CurrentProcessWow64Process != 0 ? 1 : 4);
            memmove(v25, (const void *)Address, v22);
            GestureConfigSettings = GetGestureConfigSettings(v11, (__int64)v25);
            if ( GestureConfigSettings )
              memmove((void *)Address, v25, v22);
            if ( v25 )
              Win32FreePool(v25);
            goto LABEL_21;
          }
          v16 = 8;
          goto LABEL_20;
        }
      }
    }
    v16 = 87;
LABEL_20:
    GestureConfigSettings = 0;
    UserSetLastError(v16);
    goto LABEL_21;
  }
  GestureConfigSettings = 0;
LABEL_22:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v33, v9, v12);
  UserSessionSwitchLeaveCrit(v29, v28, v30, v31);
  return GestureConfigSettings;
}
