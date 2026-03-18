/*
 * XREFs of ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1403965DC
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77@Z @ 0x1401F4640 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     ?AddDeviceSyncObjectToList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z @ 0x140396668 (-AddDeviceSyncObjectToList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z.c)
 */

DXGDEVICESYNCOBJECT *__fastcall DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(
        DXGDEVICESYNCOBJECT *this,
        struct DXGDEVICE *a2,
        char a3,
        char a4)
{
  char v5; // cl

  *((_QWORD *)this + 2) = a2;
  *(_OWORD *)this = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  v5 = *((_BYTE *)this + 92) & 0xFC;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_BYTE *)this + 92) = (4 * a4) | ((2 * a3) | v5) & 0xFB;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 18) = 0;
  if ( a3 )
    DXGDEVICE::AddDeviceSyncObjectToList(*((DXGDEVICE **)this + 2), this);
  return this;
}
