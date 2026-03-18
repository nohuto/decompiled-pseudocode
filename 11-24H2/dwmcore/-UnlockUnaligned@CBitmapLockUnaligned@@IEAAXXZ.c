/*
 * XREFs of ?UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ @ 0x180256390
 * Callers:
 *     ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x180256040 (--1CBitmapLockUnaligned@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?WriteUnalignedScanline@@YAXPEAEPEBEII@Z @ 0x180256420 (-WriteUnalignedScanline@@YAXPEAEPEBEII@Z.c)
 */

void __fastcall CBitmapLockUnaligned::UnlockUnaligned(CBitmapLockUnaligned *this)
{
  const unsigned __int8 *v1; // rdi
  unsigned __int8 *v3; // rsi
  unsigned int i; // ebp

  v1 = (const unsigned __int8 *)*((_QWORD *)this + 13);
  if ( v1 )
  {
    if ( (*((_BYTE *)this + 120) & 2) != 0 )
    {
      v3 = (unsigned __int8 *)*((_QWORD *)this + 16);
      for ( i = 0; i < *((_DWORD *)this + 21); v1 += *((unsigned int *)this + 22) )
      {
        WriteUnalignedScanline(v3, v1, *((_DWORD *)this + 36), *((_DWORD *)this + 37));
        ++i;
        v3 += *((unsigned int *)this + 34);
      }
    }
  }
  operator delete(*((void **)this + 13));
  *((_QWORD *)this + 13) = 0LL;
}
