/*
 * XREFs of ?HampHostCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180059D6C
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027770 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x1800821A8 (-HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRI.c)
 * Callees:
 *     <none>
 */

void __fastcall HampHostCheckQueueInterruptiveUIChangeWorker(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // esi
  DWORD v7; // ebp
  __int64 v8; // rdi
  _QWORD *Value; // rbx
  unsigned int v10; // ecx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v14; // rax
  struct _RTL_BITMAP v15; // [rsp+20h] [rbp-28h] BYREF
  struct _RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-18h] BYREF

  v1 = 624LL;
  if ( a1 )
    v1 = (__int64)a1 + 560;
  if ( *(_DWORD *)v1 == 2 )
  {
    v3 = (*((_QWORD *)a1 + 76) - 96LL) & -(__int64)(*((_QWORD *)a1 + 76) != (_QWORD)a1 + 608);
    while ( v3 )
    {
      if ( *(_BYTE *)(v3 + 562) == 3 && (*(_BYTE *)(v3 + 552) & 0x48) == 0 )
      {
        v15 = 0LL;
        RtlInitializeBitMap(&v15, (PULONG)(v3 + 496), 0x2Fu);
        if ( _bittest64((const signed __int64 *)v15.Buffer, 0x18u) )
          goto LABEL_24;
      }
      v4 = *(_QWORD *)(v3 + 96);
      v5 = *(_QWORD *)(v3 + 80);
      v3 = 0LL;
      if ( v4 != v5 + 608 )
        v3 = v4 - 96;
    }
    if ( (*((_QWORD *)a1 + 83) & 0x400000000000000LL) == 0
      || (v14 = *((_QWORD *)a1 + 99),
          BitMapHeader = 0LL,
          RtlInitializeBitMap(
            &BitMapHeader,
            (PULONG)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v14 + 88) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 120)
                                + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                   + 568),
            0x2Fu),
          !_bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x18u)) )
    {
      v6 = 0;
      goto LABEL_13;
    }
LABEL_24:
    v6 = 1;
LABEL_13:
    v7 = HampLockTrackerId;
    v8 = *((_QWORD *)a1 + 99);
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v7) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *Value |= 0x20uLL;
      ++Value[6];
    }
    RtlAcquireSRWLockExclusive(v8 + 584);
    *(_DWORD *)(v8 + 592) = GetCurrentThreadId();
    v10 = (v6 << 18) | *(_DWORD *)(v8 + 616) & 0xFFFBFFFF;
    *(_DWORD *)(v8 + 616) = v10;
    if ( v6 != ((v10 >> 17) & 1) && (v10 & 0x80000) == 0 )
    {
      *(_DWORD *)(v8 + 616) = v10 | 0x80000;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 24)) <= 1 )
        __fastfail(0xEu);
      TpPostWork(*(_QWORD *)(v8 + 560));
    }
    if ( HampLockTrackerId != -1 )
    {
      v11 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v12 = *v11;
      if ( (*v11 & 0x20) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      if ( v11[6]-- == 1 )
        *v11 = v12 & 0xFFFFFFFFFFFFFFDFuLL;
    }
    *(_DWORD *)(v8 + 592) = 0;
    RtlReleaseSRWLockExclusive(v8 + 584);
  }
}
