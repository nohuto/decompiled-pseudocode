/*
 * XREFs of ?_Unchecked_erase@?$list@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@2@QEAU32@@Z @ 0x18003D820
 * Callers:
 *     ?ProcessInputStreamEndedMessage@Win32kInterop@@AEAAXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z @ 0x18003D000 (-ProcessInputStreamEndedMessage@Win32kInterop@@AEAAXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>::_Unchecked_erase(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx

  v3 = *a2;
  --*(_QWORD *)(a1 + 8);
  *a2[1] = v3;
  v3[1] = a2[1];
  v4 = a2[4];
  if ( v4 )
  {
    a2[4] = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  }
  v5 = a2[3];
  if ( v5 )
  {
    a2[3] = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  }
  operator delete(a2, (const struct std::nothrow_t *)0x28);
  return v3;
}
