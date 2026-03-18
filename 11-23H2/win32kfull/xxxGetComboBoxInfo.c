/*
 * XREFs of xxxGetComboBoxInfo @ 0x1C022FF30
 * Callers:
 *     NtUserGetComboBoxInfo @ 0x1C01D0310 (NtUserGetComboBoxInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 *     unsafe_cast_fnid_or_class_to_PCOMBOWND @ 0x1C01BA9F0 (unsafe_cast_fnid_or_class_to_PCOMBOWND.c)
 *     unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX @ 0x1C01BAAB0 (unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX.c)
 */

__int64 __fastcall xxxGetComboBoxInfo(unsigned __int64 *BugCheckParameter2, __int128 *a2)
{
  unsigned int v4; // ebx
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 *v7; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  ULONG64 v11; // rcx
  __int64 v12; // r8
  PRKPROCESS *v13; // r14
  PRKPROCESS *v14; // rax
  __int64 v15; // r15
  __int64 v16; // r15
  PRKPROCESS *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // ecx
  _BYTE v36[48]; // [rsp+50h] [rbp-B8h]
  __int128 v37; // [rsp+80h] [rbp-88h]
  PRKPROCESS *v40; // [rsp+128h] [rbp+20h]

  v4 = 0;
  v5 = 0LL;
  *(_DWORD *)v36 = 64;
  v7 = (__int64 *)unsafe_cast_fnid_or_class_to_PCOMBOWND(BugCheckParameter2);
  if ( !v7 )
  {
    v5 = (__int64 *)unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX(BugCheckParameter2);
    if ( !v5 )
    {
      _InterlockedAdd(&glSendMessage, 1u);
      return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x164u, 0LL, a2, 0, 0, 0LL, 1, 1);
    }
  }
  if ( *(_DWORD *)a2 != 64 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  v13 = (PRKPROCESS *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v11 = -*(_QWORD *)CurrentProcessWin32Process;
    v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v13 = (PRKPROCESS *)(v10 & CurrentProcessWin32Process);
  }
  v14 = *(PRKPROCESS **)(BugCheckParameter2[2] + 424);
  v40 = v14;
  if ( v14 != v13 )
    KeAttachProcess(*v14);
  if ( v7 )
  {
    v15 = *v7;
    goto LABEL_19;
  }
  v16 = *v5;
  if ( *v5 )
  {
    if ( PsGetCurrentProcessWow64Process(v11, v10, v12) )
      v18 = 0LL;
    else
      v18 = 3LL;
    if ( (v18 & v16) != 0 )
      goto LABEL_50;
    v11 = MmUserProbeAddress;
    v15 = *(_QWORD *)(v16 + 144);
LABEL_19:
    if ( !v15 )
    {
      v17 = v40;
      goto LABEL_51;
    }
    if ( PsGetCurrentProcessWow64Process(v11, v10, v12) )
      v21 = 0LL;
    else
      v21 = 3LL;
    if ( (v21 & v15) == 0 )
    {
      v22 = *(_QWORD *)v15;
      v25 = PsGetCurrentProcessWow64Process(MmUserProbeAddress, v19, v20) ? 0LL : 3LL;
      if ( (v25 & v22) == 0 )
      {
        v26 = 0LL;
        if ( v22 )
          v26 = *(_QWORD *)v22;
        *(_QWORD *)&v36[40] = v26;
        v27 = *(_QWORD *)(v15 + 64);
        v30 = PsGetCurrentProcessWow64Process(MmUserProbeAddress, v23, v24) ? 0LL : 3LL;
        if ( (v30 & v27) == 0 )
        {
          v31 = 0LL;
          if ( v27 )
            v31 = *(_QWORD *)v27;
          if ( v31 == *BugCheckParameter2 )
            v31 = 0LL;
          *(_QWORD *)&v37 = v31;
          v32 = *(_QWORD *)(v15 + 72);
          v33 = PsGetCurrentProcessWow64Process(v31, v28, v29) ? 0LL : 3LL;
          if ( (v33 & v32) == 0 )
          {
            v34 = 0LL;
            if ( v32 )
              v34 = *(_QWORD *)v32;
            *((_QWORD *)&v37 + 1) = v34;
            *(_OWORD *)&v36[4] = *(_OWORD *)(v15 + 16);
            *(_OWORD *)&v36[20] = *(_OWORD *)(v15 + 32);
            *(_DWORD *)&v36[36] = 0;
            v35 = *(_DWORD *)(v15 + 80);
            if ( (v35 & 3) == 1 )
            {
              *(_DWORD *)&v36[36] = 0x8000;
              v4 = 0x8000;
            }
            if ( (v35 & 0x20) != 0 )
              *(_DWORD *)&v36[36] = v4 | 8;
            *a2 = *(_OWORD *)v36;
            a2[1] = *(_OWORD *)&v36[16];
            a2[2] = *(_OWORD *)&v36[32];
            a2[3] = v37;
            v4 = 1;
            v17 = v40;
            goto LABEL_51;
          }
        }
      }
    }
LABEL_50:
    ExRaiseDatatypeMisalignment();
  }
  v17 = v40;
LABEL_51:
  if ( v17 != v13 )
    KeDetachProcess();
  return v4;
}
