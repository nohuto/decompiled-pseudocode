/*
 * XREFs of ?RemoveDirectFlipResourceFromRequestedPinnedList@DXGDEVICE@@AEAAXIIPEBVDXGRESOURCEREFERENCE@@@Z @ 0x1401BB754
 * Callers:
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x14032C7C0 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     Feature_4078915896__private_IsEnabledDeviceUsageNoInline @ 0x14006B7A8 (Feature_4078915896__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAXIPEAVDXGALLOCATION@@@Z @ 0x1403B27E8 (-RemoveDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAXIPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::RemoveDirectFlipResourceFromRequestedPinnedList(
        DXGDEVICE *this,
        unsigned int a2,
        unsigned int a3,
        const struct DXGRESOURCEREFERENCE *a4)
{
  int IsEnabledDeviceUsageNoInline; // r15d
  __int64 v9; // rsi
  struct DXGALLOCATION *i; // rbx
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  IsEnabledDeviceUsageNoInline = Feature_4078915896__private_IsEnabledDeviceUsageNoInline();
  if ( a3 )
  {
    v9 = a3;
    do
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGFASTMUTEX *const)(*(_QWORD *)a4 + 80LL), 0);
      if ( IsEnabledDeviceUsageNoInline )
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
      for ( i = *(struct DXGALLOCATION **)(*(_QWORD *)a4 + 24LL); i; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
        DXGDEVICE::RemoveDirectFlipAllocationFromRequestedPinnedList(this, a2, i);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
      a4 = (const struct DXGRESOURCEREFERENCE *)((char *)a4 + 8);
      --v9;
    }
    while ( v9 );
  }
}
