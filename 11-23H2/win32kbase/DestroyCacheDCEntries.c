/*
 * XREFs of DestroyCacheDCEntries @ 0x1C0050FE8
 * Callers:
 *     DestroyThreadsObjects @ 0x1C004F800 (DestroyThreadsObjects.c)
 *     CleanupGDI @ 0x1C00A0060 (CleanupGDI.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C0051080 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0051170 (GreUnlockVisRgn.c)
 *     DestroyCacheDC @ 0x1C005D380 (DestroyCacheDC.c)
 */

__int64 __fastcall DestroyCacheDCEntries(__int64 a1)
{
  __int64 **v2; // rdi
  __int64 *v3; // rbx
  __int64 *v4; // rax

  GreLockVisRgn(*((_QWORD *)gpDispInfo + 5));
  v2 = (__int64 **)((char *)gpDispInfo + 24);
  v3 = (__int64 *)*((_QWORD *)gpDispInfo + 3);
  if ( v3 )
  {
    do
    {
      if ( a1 == v3[9] && (v3[8] & 0x80000002) == 2 )
        DestroyCacheDC(v2, v3[1]);
      v4 = *v2;
      if ( v3 == *v2 )
      {
        v4 = (__int64 *)*v3;
        v2 = (__int64 **)v3;
      }
      v3 = v4;
    }
    while ( v4 );
  }
  return GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
}
