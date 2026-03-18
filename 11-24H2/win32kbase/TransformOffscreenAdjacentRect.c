/*
 * XREFs of TransformOffscreenAdjacentRect @ 0x140110088
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x140047880 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     PhysicalToLogicalDPIRect @ 0x1400453C0 (PhysicalToLogicalDPIRect.c)
 *     LogicalToPhysicalDPIRect @ 0x140046540 (LogicalToPhysicalDPIRect.c)
 *     FindAdjacentMonitor @ 0x140110194 (FindAdjacentMonitor.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall TransformOffscreenAdjacentRect(
        LONG *a1,
        int *a2,
        struct tagRECT *a3,
        unsigned int a4,
        unsigned int a5)
{
  LONG v6; // r8d
  LONG left; // eax
  LONG top; // ecx
  LONG right; // ecx
  LONG bottom; // ecx
  int v14; // ebx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // r8d
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  __int64 result; // rax
  int v22; // ecx
  int v23; // edx
  __int64 AdjacentMonitor; // [rsp+20h] [rbp-20h] BYREF
  __int128 v25; // [rsp+28h] [rbp-18h] BYREF

  v6 = *a1;
  left = a3->left;
  v25 = 0LL;
  if ( v6 >= left )
    v6 = left;
  *a1 = v6;
  top = a1[1];
  if ( top >= a3->top )
    top = a3->top;
  a1[1] = top;
  right = a1[2];
  if ( right <= a3->right )
    right = a3->right;
  a1[2] = right;
  bottom = a1[3];
  if ( bottom <= a3->bottom )
    bottom = a3->bottom;
  a1[3] = bottom;
  AdjacentMonitor = FindAdjacentMonitor(a3, a5);
  v14 = LogicalToPhysicalDPIRect((__int64)&v25, a3, a5, &AdjacentMonitor);
  v15 = PhysicalToLogicalDPIRect((__int64)&v25, &v25, a4, &AdjacentMonitor);
  v16 = v25;
  v17 = v14 | v15;
  v18 = DWORD2(v25);
  if ( *a2 < (int)v25 )
    v16 = *a2;
  v19 = a2[1];
  *a2 = v16;
  v20 = DWORD1(v25);
  if ( v19 < SDWORD1(v25) )
    v20 = v19;
  result = v17;
  a2[1] = v20;
  if ( a2[2] > v18 )
    v18 = a2[2];
  v22 = a2[3];
  a2[2] = v18;
  v23 = HIDWORD(v25);
  if ( v22 > SHIDWORD(v25) )
    v23 = v22;
  a2[3] = v23;
  return result;
}
