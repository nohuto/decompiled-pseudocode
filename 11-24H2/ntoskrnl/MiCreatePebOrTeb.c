/*
 * XREFs of MiCreatePebOrTeb @ 0x1408DE464
 * Callers:
 *     MiInitializeWowPeb @ 0x1408DCF04 (MiInitializeWowPeb.c)
 *     MmCreatePeb @ 0x1408DDBA4 (MmCreatePeb.c)
 * Callees:
 *     MiAllocateFromSubAllocatedRegion @ 0x1408DE814 (MiAllocateFromSubAllocatedRegion.c)
 */

__int64 __fastcall MiCreatePebOrTeb(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdx

  *a3 = 0LL;
  if ( (_DWORD)a1 )
  {
    v3 = 6264LL;
    if ( (_DWORD)a1 != 4 )
    {
      switch ( (_DWORD)a1 )
      {
        case 5:
          v3 = 12344LL;
          break;
        case 6:
          v3 = 14456LL;
          break;
        case 1:
          v3 = 1208LL;
          break;
        case 2:
          v3 = 2048LL;
          break;
      }
    }
  }
  else
  {
    v3 = 2008LL;
  }
  return MiAllocateFromSubAllocatedRegion(a1, (v3 + 4095) & 0xFFFFF000LL);
}
