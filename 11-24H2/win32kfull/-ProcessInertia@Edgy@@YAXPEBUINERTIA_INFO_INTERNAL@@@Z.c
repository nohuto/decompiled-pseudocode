/*
 * XREFs of ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1402071D8
 * Callers:
 *     EditionEdgyProcessInertia @ 0x1402071C0 (EditionEdgyProcessInertia.c)
 * Callees:
 *     _GetPointerDeviceRects @ 0x1400264A4 (_GetPointerDeviceRects.c)
 *     _GetPointerDeviceType @ 0x14018F428 (_GetPointerDeviceType.c)
 *     ?_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z @ 0x1402A4930 (-_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1402A4C80 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall Edgy::ProcessInertia(Edgy *this, const struct INERTIA_INFO_INTERNAL *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rbp
  unsigned int i; // edi
  __int64 v6; // rbx
  __int64 v7; // rcx
  const struct tagRECT *v8; // r8
  __m128i v9; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(W32GetUserSessionState(this, a2) + 19200);
  v4 = *(_QWORD *)(v3 + 248);
  if ( v4
    && (*((_DWORD *)this + 46) & 8) != 0
    && *((float *)this + 5) > 0.0
    && (unsigned int)(*((_DWORD *)this + 6) - 1) <= 1 )
  {
    for ( i = 0; i < *(_DWORD *)v4; ++i )
    {
      v6 = *(_QWORD *)(v4 + 8) + 32LL * i;
      if ( *(_DWORD *)(v6 + 16) == 1 && (((unsigned int)GetPointerDeviceType(*(_QWORD *)v6, v3) - 1) & 0xFFFFFFFD) == 0 )
      {
        v7 = *(_QWORD *)v6;
        v9 = 0LL;
        if ( (unsigned int)GetPointerDeviceRects(v7, 0LL, &v9) )
        {
          if ( (unsigned int)Edgy::_InertiaRegionIntersectsTopEdge(this, (const struct INERTIA_INFO_INTERNAL *)&v9, v8) )
          {
            Edgy::_PostEdgyInertia(*(_QWORD *)(v6 + 8), 1LL, *(unsigned int *)(v4 + 272));
            return;
          }
        }
      }
    }
  }
}
