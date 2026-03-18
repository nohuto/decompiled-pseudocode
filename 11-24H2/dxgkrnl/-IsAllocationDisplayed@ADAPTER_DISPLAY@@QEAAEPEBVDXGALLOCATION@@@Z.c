/*
 * XREFs of ?IsAllocationDisplayed@ADAPTER_DISPLAY@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1401998C4
 * Callers:
 *     ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x14006228C (-IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetDisplayPlaneConfigHead@@YAPEAU_DISPLAY_PLANE_CONFIG@@PEAU_DISPLAY_PLANE_CONFIG_QUEUE@@PEAH@Z @ 0x1403B133C (-GetDisplayPlaneConfigHead@@YAPEAU_DISPLAY_PLANE_CONFIG@@PEAU_DISPLAY_PLANE_CONFIG_QUEUE@@PEAH@Z.c)
 */

char __fastcall ADAPTER_DISPLAY::IsAllocationDisplayed(ADAPTER_DISPLAY *this, const struct DXGALLOCATION *a2)
{
  unsigned int v4; // ebp
  unsigned int v5; // r8d
  char v6; // bl
  __int64 v7; // r10
  unsigned int v8; // r9d
  __int64 v9; // r11
  unsigned int v10; // esi
  const struct DXGALLOCATION **DisplayPlaneConfigHead; // rax
  int v12; // r9d
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+50h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (ADAPTER_DISPLAY *)((char *)this + 624), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v4 = *((_DWORD *)this + 24);
  v5 = 0;
  v6 = 1;
  while ( v5 < v4 )
  {
    v7 = *((_QWORD *)this + 16);
    v8 = 0;
    v9 = 4024LL * v5;
    v10 = *(_DWORD *)(v9 + v7 + 3784);
    while ( v8 < v10 )
    {
      DisplayPlaneConfigHead = (const struct DXGALLOCATION **)GetDisplayPlaneConfigHead(
                                                                (struct _DISPLAY_PLANE_CONFIG_QUEUE *)(v9 + v7 + 168LL * v8 + 1168),
                                                                &v15);
      if ( DisplayPlaneConfigHead && *DisplayPlaneConfigHead == a2 )
        goto LABEL_10;
      v8 = v12 + 1;
    }
    ++v5;
  }
  v6 = 0;
LABEL_10:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  return v6;
}
