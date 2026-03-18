/*
 * XREFs of ?Create@CDWMBackchannelManager@@SAJPEAU_KEVENT@@PEAPEAV1@@Z @ 0x140057DAC
 * Callers:
 *     ?Initialize@CFlipManager@@IEAAJPEAX@Z @ 0x14005B280 (-Initialize@CFlipManager@@IEAAJPEAX@Z.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAPEAX_K@Z @ 0x140057E18 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAPEAX_K@Z.c)
 *     ??0CBackchannelManager@@IEAA@PEAU_KEVENT@@@Z @ 0x1400A03E0 (--0CBackchannelManager@@IEAA@PEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall CDWMBackchannelManager::Create(struct _KEVENT *a1, struct CDWMBackchannelManager **a2)
{
  CBackchannelManager *v4; // rax
  CBackchannelManager *v5; // rbx

  v4 = (CBackchannelManager *)DXGQUOTAALLOCATOR<256,1835156294>::operator new();
  v5 = v4;
  if ( v4 )
  {
    CBackchannelManager::CBackchannelManager(v4, a1);
    *((_BYTE *)v5 + 40) &= 0xF8u;
    *(_QWORD *)v5 = &CDWMBackchannelManager::`vftable';
    *((_DWORD *)v5 + 7) = 1024;
  }
  *a2 = v5;
  return v5 == 0LL ? 0xC0000017 : 0;
}
