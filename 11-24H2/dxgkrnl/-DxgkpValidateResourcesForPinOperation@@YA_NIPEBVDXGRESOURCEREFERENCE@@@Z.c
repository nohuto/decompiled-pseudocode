/*
 * XREFs of ?DxgkpValidateResourcesForPinOperation@@YA_NIPEBVDXGRESOURCEREFERENCE@@@Z @ 0x1401BA9B8
 * Callers:
 *     ?PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z @ 0x1401BB450 (-PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     Feature_4078915896__private_IsEnabledDeviceUsageNoInline @ 0x14006B7A8 (Feature_4078915896__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall DxgkpValidateResourcesForPinOperation(unsigned int a1, const struct DXGRESOURCEREFERENCE *a2)
{
  unsigned int v4; // edi
  int IsEnabledDeviceUsageNoInline; // r14d
  __int64 v6; // rbx
  __int64 i; // r8
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  IsEnabledDeviceUsageNoInline = Feature_4078915896__private_IsEnabledDeviceUsageNoInline();
  if ( a1 )
  {
    while ( 2 )
    {
      v6 = *(_QWORD *)a2;
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGFASTMUTEX *const)(*(_QWORD *)a2 + 80LL), 0);
      if ( IsEnabledDeviceUsageNoInline )
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
      for ( i = *(_QWORD *)(v6 + 24); i; i = *(_QWORD *)(i + 64) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(i + 48) + 4LL) & 0x2000) != 0 )
        {
          WdLogSingleEntry2(3LL, v6, i);
          WdLogGlobalForLineNumber = 6773;
          goto LABEL_13;
        }
        if ( (*(_DWORD *)(i + 72) & 0x800) != 0 )
        {
          WdLogSingleEntry2(3LL, v6, i);
          WdLogGlobalForLineNumber = 6781;
LABEL_13:
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v9);
          return 0;
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v9);
      ++v4;
      a2 = (const struct DXGRESOURCEREFERENCE *)((char *)a2 + 8);
      if ( v4 < a1 )
        continue;
      break;
    }
  }
  return 1;
}
