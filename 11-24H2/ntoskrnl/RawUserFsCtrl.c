/*
 * XREFs of RawUserFsCtrl @ 0x1408AE174
 * Callers:
 *     RawFileSystemControl @ 0x1408AE108 (RawFileSystemControl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     RawBeginOperation @ 0x1404052F0 (RawBeginOperation.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1404501F0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     RawEndOperation @ 0x14047ED8C (RawEndOperation.c)
 *     FsRtlNotifyVolumeEvent @ 0x14070B7F0 (FsRtlNotifyVolumeEvent.c)
 *     RawQueryFileSystemInformation @ 0x14077CBF4 (RawQueryFileSystemInformation.c)
 */

__int64 __fastcall RawUserFsCtrl(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  unsigned int FileSystemInformation; // ebx
  struct _FILE_OBJECT *v5; // rsi
  char v6; // r15
  int v10; // ebp
  ULONG v11; // edx
  struct _FAST_MUTEX *v12; // r14
  int v13; // eax
  int v14; // eax
  BOOLEAN v15; // r14
  int v16; // ecx

  v3 = *(_DWORD *)(a2 + 24);
  FileSystemInformation = 0;
  v5 = *(struct _FILE_OBJECT **)(a2 + 48);
  v6 = 0;
  if ( v3 == 589848 )
  {
    FsRtlNotifyVolumeEvent(v5, 3u);
    goto LABEL_32;
  }
  if ( *(_DWORD *)(a2 + 24) != 589856 )
  {
    if ( v3 == 589824 || v3 == 589828 || v3 == 589836 || v3 == 589844 )
    {
      if ( !RawBeginOperation(a3, *(_QWORD *)(a2 + 48)) )
      {
        FileSystemInformation = -1073741202;
        goto LABEL_12;
      }
      FileSystemInformation = -1073741822;
      goto LABEL_37;
    }
    if ( v3 != 589848 )
    {
      if ( v3 == 589852 )
      {
        v12 = (struct _FAST_MUTEX *)(a3 + 240);
        ExAcquireFastMutex((PKGUARDED_MUTEX)(a3 + 240));
        v13 = *(_DWORD *)(a3 + 120);
        if ( (v13 & 1) != 0 )
        {
          *(_QWORD *)(a3 + 224) = 0LL;
          *(_DWORD *)(a3 + 120) = v13 & 0xFFFFFFFE;
        }
        else
        {
          FileSystemInformation = -1073741782;
        }
        goto LABEL_30;
      }
      if ( v3 != 589856 )
      {
        if ( v3 != 590412 )
        {
          FileSystemInformation = -1073741811;
          goto LABEL_12;
        }
        if ( !RawBeginOperation(a3, *(_QWORD *)(a2 + 48)) )
          return (unsigned int)-1073741202;
        FileSystemInformation = RawQueryFileSystemInformation(a1, a2, a3);
        goto LABEL_37;
      }
      goto LABEL_25;
    }
LABEL_32:
    v15 = RawBeginOperation(a3, (__int64)v5);
    ExAcquireFastMutex((PKGUARDED_MUTEX)(a3 + 240));
    v16 = *(_DWORD *)(a3 + 120);
    if ( (v16 & 1) != 0 || *(_DWORD *)(a3 + 124) != 1 )
    {
      FileSystemInformation = -1073741790;
    }
    else
    {
      *(_QWORD *)(a3 + 224) = v5;
      *(_DWORD *)(a3 + 120) = v16 | 1;
      FileSystemInformation = v15 == 0 ? 0xC000026E : 0;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a3 + 240));
    if ( v15 )
    {
LABEL_37:
      RawEndOperation(a3, (__int64)v5);
      goto LABEL_38;
    }
    goto LABEL_38;
  }
  FsRtlNotifyVolumeEvent(v5, 1u);
LABEL_25:
  v12 = (struct _FAST_MUTEX *)(a3 + 240);
  ExAcquireFastMutex((PKGUARDED_MUTEX)(a3 + 240));
  v14 = *(_DWORD *)(a3 + 120);
  if ( (v14 & 2) != 0 )
  {
    FileSystemInformation = -1073741202;
  }
  else
  {
    v6 = 1;
    *(_DWORD *)(a3 + 120) = v14 | 2;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a3 + 240));
  if ( v6 )
  {
    ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a3 + 232));
    ExAcquireFastMutex((PKGUARDED_MUTEX)(a3 + 240));
    *(_QWORD *)(a3 + 216) = v5;
LABEL_30:
    KeReleaseGuardedMutex(v12);
  }
LABEL_38:
  if ( (FileSystemInformation & 0x80000000) != 0 )
  {
LABEL_12:
    v10 = v3 - 589848;
    if ( !v10 )
    {
      v11 = 4;
      goto LABEL_42;
    }
    if ( v10 == 8 )
    {
      v11 = 2;
LABEL_42:
      FsRtlNotifyVolumeEvent(v5, v11);
      return FileSystemInformation;
    }
    return FileSystemInformation;
  }
  if ( v3 == 589852 )
  {
    v11 = 5;
    goto LABEL_42;
  }
  return FileSystemInformation;
}
