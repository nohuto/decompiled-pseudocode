/*
 * XREFs of ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x1801D52C0
 * Callers:
 *     ?GetSize@CCompressedSourceBitmap@@WCA@EAAJPEAI0@Z @ 0x1802557C0 (-GetSize@CCompressedSourceBitmap@@WCA@EAAJPEAI0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x1801D5618 (-EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ.c)
 */

__int64 __fastcall CCompressedSourceBitmap::GetSize(struct _RTL_CRITICAL_SECTION *this, LONG *a2, LONG *a3)
{
  unsigned int v3; // ebx
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  if ( this[2].LockCount && this[2].RecursionCount
    || (v8 = CCompressedSourceBitmap::EnsureWICBitmapFrame((CCompressedSourceBitmap *)this), v9 = v8, v8 >= 0) )
  {
    EnterCriticalSection(this + 1);
    if ( a2 && a3 )
    {
      *a2 = this[2].LockCount;
      *a3 = this[2].RecursionCount;
      if ( this != (struct _RTL_CRITICAL_SECTION *)-40LL )
        LeaveCriticalSection(this + 1);
    }
    else
    {
      if ( this != (struct _RTL_CRITICAL_SECTION *)-40LL )
        LeaveCriticalSection(this + 1);
      return (unsigned int)-2147024809;
    }
    return v3;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\CompressedSourceBitmap.h",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
