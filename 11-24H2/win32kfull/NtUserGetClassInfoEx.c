/*
 * XREFs of NtUserGetClassInfoEx @ 0x140295740
 * Callers:
 *     <none>
 * Callees:
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14003D210 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x14003E628 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     _GetClassInfoEx @ 0x140046494 (_GetClassInfoEx.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x140116D40 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     RegisterDefaultClass @ 0x140239260 (RegisterDefaultClass.c)
 *     RegisterIconTitleClass @ 0x140239490 (RegisterIconTitleClass.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtUserGetClassInfoEx(__int64 a1, unsigned int *a2, _OWORD *a3, _QWORD *a4, unsigned int a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct tagTHREADINFO *v11; // r15
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rcx
  ULONG64 v15; // rdx
  __int64 v16; // rcx
  wchar_t *v17; // rbx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rsi
  ULONG_PTR v20; // rax
  void *v21; // rdi
  __int64 v22; // rax
  _BYTE *v23; // rdx
  _DWORD *v24; // rdx
  unsigned __int16 ClassInfo; // ax
  int v27; // [rsp+30h] [rbp-E8h]
  wchar_t *Str1_8; // [rsp+50h] [rbp-C8h]
  _QWORD v29[3]; // [rsp+58h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter2[4]; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+90h] [rbp-88h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-78h]
  __int128 v33; // [rsp+B0h] [rbp-68h]
  __int128 v34; // [rsp+C0h] [rbp-58h]
  __int128 v35; // [rsp+D0h] [rbp-48h]

  v29[0] = 0LL;
  memset_0(&v31, 0, 0x50uLL);
  EnterCrit(0LL, 0LL);
  v11 = PtiCurrent(v9, v8);
  v12 = *((_QWORD *)v11 + 58);
  if ( (*(_DWORD *)(v12 + 12) & 0x10000000) != 0 || (unsigned int)RegisterIconTitleClass(v12, v10) )
  {
    tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (unsigned int *)MmUserProbeAddress;
    v16 = *a2;
    v27 = *a2;
    v17 = (wchar_t *)*((_QWORD *)a2 + 1);
    Str1_8 = v17;
    v18 = (unsigned __int64)v17 & 0xFFFFFFFFFFFF0000uLL;
    if ( ((unsigned __int64)v17 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( ((unsigned __int8)v17 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = (ULONG64)v17 + (unsigned __int16)v16 + 2;
      if ( v15 <= (unsigned __int64)v17 || v15 >= MmUserProbeAddress )
        ExRaiseAccessViolation();
      if ( (unsigned __int16)v16 > HIWORD(v27) || (v16 & 1) != 0 )
      {
        if ( (v16 & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10114);
        ExRaiseAccessViolation();
      }
    }
    if ( v18 )
    {
      v19 = (unsigned __int16)v16;
      v20 = Win32AllocPoolWithQuotaZInit((unsigned __int16)v16 + 2LL, 2020897621LL);
      v21 = (void *)v20;
      Str1_8 = (wchar_t *)v20;
      if ( !v20 )
        ExRaiseStatus(-1073741801);
      Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
        BugCheckParameter2,
        v20,
        (__int64)Win32FreePool);
      memmove(v21, v17, (unsigned int)v19);
      *((_WORD *)v21 + (v19 >> 1)) = 0;
    }
    v22 = -PsGetCurrentProcessWow64Process(v16, v15, v18);
    v29[2] = (-(__int64)(v22 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
    v23 = a3;
    if ( ((v22 != 0 ? 0 : 3) & (unsigned int)a3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v23 = (_BYTE *)MmUserProbeAddress;
    *v23 = *v23;
    v23[79] = v23[79];
    v24 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v24 = (_DWORD *)MmUserProbeAddress;
    *v24 = *v24;
    v31 = *a3;
    v32 = a3[1];
    v33 = a3[2];
    v34 = a3[3];
    v35 = a3[4];
    if ( (*(_DWORD *)(*((_QWORD *)v11 + 58) + 12LL) & 0x2000) != 0 || (unsigned int)RegisterDefaultClass(Str1_8) )
    {
      ClassInfo = GetClassInfoEx(a1, (unsigned __int64)Str1_8, (__int64)&v31, v29, a5);
      v13 = ClassInfo;
      if ( ClassInfo )
      {
        *a3 = v31;
        a3[1] = v32;
        a3[2] = v33;
        a3[3] = v34;
        a3[4] = v35;
        *a4 = v29[0];
      }
    }
    else
    {
      v13 = 0;
      UserSetLastError(87);
    }
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  }
  else
  {
    v13 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v14);
  return v13;
}
