/*
 * XREFs of xxxGetComboBoxInfo @ 0x1401C3970
 * Callers:
 *     NtUserGetComboBoxInfo @ 0x1401C3780 (NtUserGetComboBoxInfo.c)
 * Callees:
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     unsafe_cast_fnid_or_class_to_PCOMBOWND @ 0x140282EFC (unsafe_cast_fnid_or_class_to_PCOMBOWND.c)
 *     unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX @ 0x140283094 (unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX.c)
 */

__int64 __fastcall xxxGetComboBoxInfo(struct tagWND *a1, __int64 a2)
{
  unsigned int v4; // ebx
  ULONG64 *v5; // r12
  __int64 v6; // rcx
  ULONG64 *v7; // r14
  __int64 CurrentProcessWin32Process; // rax
  ULONG64 v10; // rdx
  ULONG64 v11; // rcx
  __int64 v12; // r8
  PRKPROCESS *v13; // rdi
  PRKPROCESS *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  ULONG64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r8
  ULONG64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  ULONG64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  ULONG64 v29; // [rsp+20h] [rbp-B8h]
  _BYTE v30[48]; // [rsp+30h] [rbp-A8h]
  __int128 v31; // [rsp+60h] [rbp-78h]
  ULONG64 v32; // [rsp+F8h] [rbp+20h]
  _QWORD *v33; // [rsp+F8h] [rbp+20h]
  __int64 *v34; // [rsp+F8h] [rbp+20h]
  __int64 *v35; // [rsp+F8h] [rbp+20h]

  v4 = 0;
  v5 = 0LL;
  *(_DWORD *)v30 = 64;
  v7 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PCOMBOWND();
  if ( !v7 )
  {
    v5 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX(a1);
    if ( !v5 )
      return xxxSendMessage(a1, 0x164u);
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
  v14 = *(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 464LL);
  if ( v14 != v13 )
    KeAttachProcess(*v14);
  if ( v7 )
  {
    v29 = *v7;
  }
  else
  {
    v32 = *v5;
    if ( !*v5 )
      goto LABEL_45;
    v15 = -PsGetCurrentProcessWow64Process(v11, v10, v12);
    v10 = v32;
    if ( ((v15 != 0 ? 0 : 3) & (unsigned int)v32) != 0 )
      goto LABEL_44;
    if ( v32 >= MmUserProbeAddress )
      v10 = MmUserProbeAddress;
    v11 = *(_QWORD *)(v32 + 144);
    v29 = v11;
  }
  if ( v29 )
  {
    v16 = -PsGetCurrentProcessWow64Process(v11, v10, v12);
    v18 = v29;
    if ( ((v16 != 0 ? 0 : 3) & (unsigned int)v29) == 0 )
    {
      if ( v29 >= MmUserProbeAddress )
        v18 = MmUserProbeAddress;
      v33 = *(_QWORD **)v29;
      v19 = -PsGetCurrentProcessWow64Process(*(_QWORD *)v29, v18, v17);
      v21 = (ULONG64)v33;
      if ( ((v19 != 0 ? 0 : 3) & (unsigned int)v33) == 0 )
      {
        if ( (unsigned __int64)v33 >= MmUserProbeAddress )
          v21 = MmUserProbeAddress;
        v22 = v33 ? *v33 : 0LL;
        *(_QWORD *)&v30[40] = v22;
        v34 = *(__int64 **)(v29 + 64);
        v23 = -PsGetCurrentProcessWow64Process(v34, v21, v20);
        v25 = (ULONG64)v34;
        if ( ((v23 != 0 ? 0 : 3) & (unsigned int)v34) == 0 )
        {
          if ( (unsigned __int64)v34 >= MmUserProbeAddress )
            v25 = MmUserProbeAddress;
          if ( v34 )
            v26 = *v34;
          else
            v26 = 0LL;
          if ( v26 == *(_QWORD *)a1 )
            v26 = 0LL;
          *(_QWORD *)&v31 = v26;
          v35 = *(__int64 **)(v29 + 72);
          if ( ((PsGetCurrentProcessWow64Process(v35, v25, v24) != 0 ? 0 : 3) & (unsigned int)v35) == 0 )
          {
            if ( v35 )
              v27 = *v35;
            else
              v27 = 0LL;
            *((_QWORD *)&v31 + 1) = v27;
            *(_OWORD *)&v30[4] = *(_OWORD *)(v29 + 16);
            *(_OWORD *)&v30[20] = *(_OWORD *)(v29 + 32);
            v28 = 0;
            v4 = 1;
            if ( (*(_BYTE *)(v29 + 80) & 3) == 1 )
              v28 = 0x8000;
            *(_DWORD *)&v30[36] = v28;
            if ( (*(_DWORD *)(v29 + 80) & 0x20) != 0 )
              *(_DWORD *)&v30[36] = v28 | 8;
            *(_OWORD *)a2 = *(_OWORD *)v30;
            *(_OWORD *)(a2 + 16) = *(_OWORD *)&v30[16];
            *(_OWORD *)(a2 + 32) = *(_OWORD *)&v30[32];
            *(_OWORD *)(a2 + 48) = v31;
            goto LABEL_45;
          }
        }
      }
    }
LABEL_44:
    ExRaiseDatatypeMisalignment();
  }
LABEL_45:
  if ( v14 != v13 )
    KeDetachProcess();
  return v4;
}
