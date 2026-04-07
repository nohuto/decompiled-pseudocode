/*
 * XREFs of ?Create@CDCompDesktopThumbnailCVI@@SAJPEAPEAV1@@Z @ 0x180107C64
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18000E7A0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDCompDesktopThumbnailCVI::Create(struct CDCompDesktopThumbnailCVI **a1)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rax
  _QWORD *v4; // rbx

  if ( a1 )
  {
    v3 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                     WPF::g_pProcessHeap,
                     72LL);
    v4 = v3;
    if ( v3 )
    {
      memset_0(v3, 0, 0x48uLL);
      v4[3] = 0LL;
      v4[7] = 0LL;
      *v4 = &CDCompDesktopThumbnailCVI::`vftable';
      *((_DWORD *)v4 + 2) = 1;
      v4[8] = 0LL;
      *a1 = (struct CDCompDesktopThumbnailCVI *)v4;
      return 0;
    }
    else
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x9Fu);
      *a1 = 0LL;
    }
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x9Fu);
  }
  return v2;
}
