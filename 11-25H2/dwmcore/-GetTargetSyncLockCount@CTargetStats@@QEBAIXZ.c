/*
 * XREFs of ?GetTargetSyncLockCount@CTargetStats@@QEBAIXZ @ 0x180086970
 * Callers:
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180086570 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C6C14 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTargetStats::GetTargetSyncLockCount(CTargetStats *this)
{
  unsigned int v1; // edi
  LARGE_INTEGER v3; // rcx
  __int64 v4; // rbp
  unsigned __int64 v5; // r14
  unsigned int v6; // esi
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  LARGE_INTEGER v11; // [rsp+40h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 62) > 1u && *((_QWORD *)this + 27) )
  {
    v11.QuadPart = 0LL;
    QueryPerformanceCounter(&v11);
    v3 = v11;
    v4 = *((_QWORD *)this + 24);
    v5 = *((_QWORD *)this + 25);
    v6 = *((_DWORD *)this + 52);
    PerformanceCount = v11;
    if ( !v11.QuadPart )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v3 = PerformanceCount;
    }
    if ( v5 + v4 < v3.QuadPart )
      v6 += (v3.QuadPart - v4) / v5;
    v7 = *((_DWORD *)this + 58);
    if ( v7 > v6 )
    {
      v8 = v7 - v6;
      v9 = 8;
      if ( v8 < 8 )
        return v8;
      return v9;
    }
  }
  return v1;
}
