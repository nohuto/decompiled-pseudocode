/*
 * XREFs of ?IsDesktopObscuredInternal@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@PEAH@Z @ 0x1802F1800
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

__int64 __fastcall CImmersiveMode::IsDesktopObscuredInternal(CImmersiveMode *this, struct IUnknown *a2, int *a3)
{
  unsigned __int64 v4; // rbx
  unsigned int v7; // esi
  int v8; // edi
  __int64 v9; // rcx

  *a3 = 0;
  v4 = 0LL;
  v7 = -2147319765;
  v8 = 1;
  while ( v4 < *((_QWORD *)this + 42) )
  {
    if ( SHIsSameObject(**(struct IUnknown ***)(*((_QWORD *)this + 41) + 8 * v4), a2) )
    {
      _mm_lfence();
      v9 = *(_QWORD *)(*((_QWORD *)this + 41) + 8 * v4);
      if ( *(_BYTE *)(v9 + 12) && !*(_BYTE *)(v9 + 13) )
        v8 = 0;
      *a3 = v8;
      return 0;
    }
    ++v4;
  }
  return v7;
}
