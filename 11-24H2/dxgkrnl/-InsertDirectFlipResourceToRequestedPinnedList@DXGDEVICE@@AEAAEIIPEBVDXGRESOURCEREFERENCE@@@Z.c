/*
 * XREFs of ?InsertDirectFlipResourceToRequestedPinnedList@DXGDEVICE@@AEAAEIIPEBVDXGRESOURCEREFERENCE@@@Z @ 0x140411008
 * Callers:
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x14032C7C0 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     Feature_4078915896__private_IsEnabledDeviceUsageNoInline @ 0x14006B7A8 (Feature_4078915896__private_IsEnabledDeviceUsageNoInline.c)
 *     ?InsertDirectFlipAllocationToRequestedPinnedList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1403B5364 (-InsertDirectFlipAllocationToRequestedPinnedList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 */

unsigned __int8 __fastcall DXGDEVICE::InsertDirectFlipResourceToRequestedPinnedList(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned int a3,
        const struct DXGRESOURCEREFERENCE *a4)
{
  __int64 v8; // rsi
  int IsEnabledDeviceUsageNoInline; // r15d
  const struct DXGRESOURCEREFERENCE *v10; // rdi
  struct DXGALLOCATION *i; // rbx
  _BYTE v13[56]; // [rsp+20h] [rbp-38h] BYREF

  v8 = 0LL;
  IsEnabledDeviceUsageNoInline = Feature_4078915896__private_IsEnabledDeviceUsageNoInline();
  if ( a3 )
  {
    v10 = a4;
    while ( 2 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)(*(_QWORD *)v10 + 80LL), 0);
      if ( IsEnabledDeviceUsageNoInline )
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
      for ( i = *(struct DXGALLOCATION **)(*(_QWORD *)v10 + 24LL); i; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
      {
        if ( !DXGDEVICE::InsertDirectFlipAllocationToRequestedPinnedList(this, a2, i) )
        {
          WdLogSingleEntry2(3LL, i, *((_QWORD *)a4 + v8));
          WdLogGlobalForLineNumber = 9637;
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
          return 0;
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
      v8 = (unsigned int)(v8 + 1);
      v10 = (const struct DXGRESOURCEREFERENCE *)((char *)v10 + 8);
      if ( (unsigned int)v8 < a3 )
        continue;
      break;
    }
  }
  return 1;
}
