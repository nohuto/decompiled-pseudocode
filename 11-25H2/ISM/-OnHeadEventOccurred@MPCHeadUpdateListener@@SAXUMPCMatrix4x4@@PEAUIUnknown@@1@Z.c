/*
 * XREFs of ?OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@1@Z @ 0x180073470
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RefPtr@UICoreUIClient@@@@QEAA@XZ @ 0x18000B9F0 (--1-$RefPtr@UICoreUIClient@@@@QEAA@XZ.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x1800735D4 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHeadUpdateListener::OnHeadEventOccurred(
        _OWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, char *),
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *))
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  struct MPCHeadUpdateListener *Instance; // rsi
  __int64 *v8; // rcx
  __int64 *v9; // rsi
  struct MPCHeadUpdateListener *v10; // rax
  void *v11; // rdx
  __int64 (__fastcall *v12)(_QWORD, GUID *, char *); // rbx
  int v13; // eax
  __int64 (__fastcall *v14)(_QWORD, GUID *, __int64 *); // rbx
  int v15; // eax
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)MPCHeadUpdateListener::GetInstance() + 160);
  EnterCriticalSection(v6);
  Instance = MPCHeadUpdateListener::GetInstance();
  *((_OWORD *)Instance + 6) = *a1;
  *((_OWORD *)Instance + 7) = a1[1];
  *((_OWORD *)Instance + 8) = a1[2];
  *((_OWORD *)Instance + 9) = a1[3];
  v8 = (__int64 *)((char *)Instance + 80);
  if ( a2 )
  {
    v12 = **a2;
    RefPtr<ICoreUIClient>::~RefPtr<ICoreUIClient>(v8);
    v13 = v12(a2, &GUID_87c24804_a22e_4adb_ba26_d78ef639bcf4, (char *)Instance + 80);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4E,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
        (const char *)(unsigned int)v13,
        v16);
  }
  else
  {
    RefPtr<ICoreUIClient>::~RefPtr<ICoreUIClient>(v8);
  }
  v9 = (__int64 *)((char *)Instance + 88);
  if ( a3 )
  {
    v14 = **a3;
    RefPtr<ICoreUIClient>::~RefPtr<ICoreUIClient>(v9);
    v15 = v14(a3, &GUID_87c24804_a22e_4adb_ba26_d78ef639bcf4, v9);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x57,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
        (const char *)(unsigned int)v15,
        v16);
  }
  else
  {
    RefPtr<ICoreUIClient>::~RefPtr<ICoreUIClient>(v9);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  v10 = MPCHeadUpdateListener::GetInstance();
  wil::details::SetEvent(*(wil::details **)(*((_QWORD *)v10 + 9) + 120LL), v11);
}
