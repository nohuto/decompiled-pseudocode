/*
 * XREFs of ?GetDuckingManager@CWindowsPolicyManager@@UEAAJPEAPEAUIAudioDuckingManager@@@Z @ 0x18002A5A0
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x180012090 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::GetDuckingManager(
        CWindowsPolicyManager *this,
        struct IAudioDuckingManager **a2)
{
  __int64 v2; // r8
  _DWORD *v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // r9
  _DWORD *v6; // rcx
  _QWORD *v7; // r9
  __int64 v8; // r10

  v2 = *((_QWORD *)this + 5);
  *a2 = 0LL;
  if ( v2 )
  {
    if ( InlineIsEqualGUID(&GUID_6b8591c8_b7d6_455d_8003_822bfd39c679, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *v5 = v4;
      goto LABEL_9;
    }
    if ( InlineIsEqualGUID(v3, &GUID_a68ab569_b923_4330_a258_1735412d392e) )
    {
      v8 = v4;
LABEL_7:
      *v7 = v8;
LABEL_9:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      return 0LL;
    }
    if ( InlineIsEqualGUID(v6, v6) )
    {
      v4 = v8;
      goto LABEL_7;
    }
  }
  return 0LL;
}
