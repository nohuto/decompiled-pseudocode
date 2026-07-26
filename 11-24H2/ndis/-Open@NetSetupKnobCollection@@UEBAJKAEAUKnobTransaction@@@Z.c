/*
 * XREFs of ?Open@NetSetupKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x14014A020
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF__guid_Dd @ 0x1400C9764 (WPP_RECORDER_SF__guid_Dd.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015BF20 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x14015C9F0 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

__int64 __fastcall NetSetupKnobCollection::Open(NetSetupKnobCollection *this, unsigned int a2, KRegKey *a3)
{
  __int64 v5; // rdi
  int v6; // edx
  int v7; // ebx
  wchar_t pszSrc[256]; // [rsp+40h] [rbp-238h] BYREF

  if ( a2 != 1 )
    NT_ASSERT("accessMask == (0x0001)");
  v5 = *((_QWORD *)this + 3) + 12LL;
  netsetupBuildObjectPath(2LL, v5, 0LL);
  v7 = KRegKey::Open(a3 + 1, 1u, pszSrc, 0LL);
  if ( v7 == -1073741772 )
  {
    netsetupBuildObjectPath(2LL, v5, 1LL);
    v7 = KRegKey::Open(a3 + 1, a2, pszSrc, 0LL);
  }
  if ( v7 >= 0 )
  {
    LOBYTE(a3[2].m_ptr) = 1;
    return 0LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        1u,
        0xAu,
        (struct _GUID *)&WPP_03262affb12d3555ada517b384e802e8_Traceguids,
        v5,
        1,
        v7);
    return (unsigned int)v7;
  }
}
