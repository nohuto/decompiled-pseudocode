/*
 * XREFs of ?GetSharedHandle@CHolographicInteropTexture@@UEAAJIIPEAPEAX@Z @ 0x1802DC070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicInteropTexture::GetSharedHandle(RTL_SRWLOCK *this, unsigned int a2, int a3, void **a4)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // r15
  unsigned int v7; // edi

  v4 = this + 280;
  v5 = a2;
  v7 = 0;
  *a4 = 0LL;
  AcquireSRWLockShared(this + 280);
  if ( (unsigned int)v5 >= HIDWORD(this[259].Ptr) || a3 )
    v7 = -2147024809;
  else
    *a4 = (void *)*((_QWORD *)this[256].Ptr + 12 * v5 + 1);
  ReleaseSRWLockShared(v4);
  return v7;
}
