/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140041428
 * Callers:
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x140042EF8 (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 * Callees:
 *     ?Allocate@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@QEAAPEAXXZ @ 0x140040274 (-Allocate@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400403D0 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140040560 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     RIMLockShared @ 0x1400410B0 (RIMLockShared.c)
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400BB888 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ?Destroy@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140118FA8 (-Destroy@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@?$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x140119924 (-Create@-$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledDeviceUsageNoInline @ 0x1401B60C8 (Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x14023F500 (memset.c)
 */

PVOID __fastcall NSInstrumentation::CTypeIsolation<81920,160>::Allocate(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 *i; // rsi
  __int64 v4; // r14
  __int64 v5; // rax
  _QWORD *v6; // rsi
  struct W32_PUSH_LOCK *v7; // rbx
  _QWORD *v8; // rcx
  struct W32_PUSH_LOCK *v9; // rbx
  __int64 *v10; // rcx
  __int64 **v11; // rax
  __int64 v12; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  struct _PAGED_LOOKASIDE_LIST *v15; // rcx
  PVOID v16; // rax
  PVOID v17; // rbx
  __int64 v18; // [rsp+20h] [rbp-18h] BYREF
  char v19; // [rsp+28h] [rbp-10h]

  if ( *((_BYTE *)a1 + 36) )
  {
    IsEnabledDeviceUsageNoInline = Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledDeviceUsageNoInline();
    v15 = (struct _PAGED_LOOKASIDE_LIST *)a1[3];
    if ( !IsEnabledDeviceUsageNoInline )
      return ExAllocateFromPagedLookasideList(v15);
    v16 = ExAllocateFromPagedLookasideList(v15);
    v17 = v16;
    if ( v16 )
      memset(v16, 0, 0xA0uLL);
    return v17;
  }
  v2 = 0LL;
  v18 = a1[2];
  v19 = 0;
  RIMLockShared(v18);
  for ( i = (__int64 *)*a1; ; i = (__int64 *)*i )
  {
    if ( i == a1 )
    {
      NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared(&v18);
      v5 = NSInstrumentation::CSectionEntry<81920,160>::Create();
      v6 = (_QWORD *)v5;
      if ( v5 )
      {
        v2 = NSInstrumentation::CSectionBitmapAllocator<81920,160>::Allocate(*(_QWORD *)(v5 + 32));
        if ( v2 )
        {
          v7 = (struct W32_PUSH_LOCK *)a1[2];
          GreEnterCriticalRegionAndAcquirePushLockExclusive(v7);
          v8 = (_QWORD *)*a1;
          if ( *(__int64 **)(*a1 + 8) != a1 )
            goto LABEL_9;
          *v6 = v8;
          v6[1] = a1;
          v8[1] = v6;
          *((_DWORD *)a1 + 8) += 500;
          *a1 = (__int64)v6;
          W32ReleasePushLockExclusive(v7);
        }
        else
        {
          NSInstrumentation::CSectionEntry<49152,192>::Destroy(v6);
        }
      }
      return (PVOID)v2;
    }
    v4 = NSInstrumentation::CSectionBitmapAllocator<81920,160>::Allocate(i[4]);
    if ( v4 )
      break;
  }
  if ( i == (__int64 *)*a1 )
    goto LABEL_15;
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared(&v18);
  v9 = (struct W32_PUSH_LOCK *)a1[2];
  GreEnterCriticalRegionAndAcquirePushLockExclusive(v9);
  v10 = (__int64 *)*i;
  if ( *(__int64 **)(*i + 8) != i
    || (v11 = (__int64 **)i[1], *v11 != i)
    || (*v11 = v10, v10[1] = (__int64)v11, v12 = *a1, *(__int64 **)(*a1 + 8) != a1) )
  {
LABEL_9:
    __fastfail(3u);
  }
  *i = v12;
  i[1] = (__int64)a1;
  *(_QWORD *)(v12 + 8) = i;
  *a1 = (__int64)i;
  W32ReleasePushLockExclusive(v9);
LABEL_15:
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared(&v18);
  return (PVOID)v4;
}
