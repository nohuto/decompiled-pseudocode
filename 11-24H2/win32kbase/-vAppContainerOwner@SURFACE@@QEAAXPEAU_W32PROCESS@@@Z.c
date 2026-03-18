/*
 * XREFs of ?vAppContainerOwner@SURFACE@@QEAAXPEAU_W32PROCESS@@@Z @ 0x1400BF050
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x140038680 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1400848F4 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     HmgPentryFromPobj @ 0x140032C30 (HmgPentryFromPobj.c)
 *     UserIsProcessImmersiveAppContainer @ 0x1400BF0C0 (UserIsProcessImmersiveAppContainer.c)
 */

void __fastcall SURFACE::vAppContainerOwner(SURFACE *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rax
  HSEMAPHORE v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  if ( a2 )
    v2 = -(__int64)((unsigned int)UserIsProcessImmersiveAppContainer(*(_QWORD *)a2) != 0) & a2;
  SEMOBJ<20>::SEMOBJ<20>(&v5);
  v4 = HmgPentryFromPobj(this);
  if ( v2 )
    *(_BYTE *)(v4 + 15) |= 0x80u;
  else
    *(_BYTE *)(v4 + 15) &= ~0x80u;
  *((_QWORD *)this + 80) = v2;
  SEMOBJ<20>::vUnlock(&v5);
}
