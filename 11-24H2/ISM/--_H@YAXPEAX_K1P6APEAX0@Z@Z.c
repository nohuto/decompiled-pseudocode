/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18010CFF8
 * Callers:
 *     ??0GestureSession@@AEAA@XZ @ 0x1801B2D20 (--0GestureSession@@AEAA@XZ.c)
 * Callees:
 *     ?AsPrincipal@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAPEAV123@XZ @ 0x18006AB90 (-AsPrincipal@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAPEAV123@XZ.c)
 */

void __fastcall `vector constructor iterator'(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        void *(*a4)(void *))
{
  __int64 v5; // rdi

  v5 = 10LL;
  do
  {
    Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal(this);
    this = (Microsoft::BamoImpl::BamoPrincipalImpl *)((char *)this + 12);
    --v5;
  }
  while ( v5 );
}
