/*
 * XREFs of NvmeControllerReenumerationRoutine @ 0x1400BF370
 * Callers:
 *     <none>
 * Callees:
 *     NvmeControllerGetChangedNamespaceListLog @ 0x1400BEBD0 (NvmeControllerGetChangedNamespaceListLog.c)
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400BEE0C (NvmeControllerIdentifyChangedNamespaces.c)
 */

void __fastcall NvmeControllerReenumerationRoutine(
        PDEVICE_OBJECT DeviceObject,
        volatile signed __int32 *Context,
        __int64 a3)
{
  __int64 v4; // rax
  signed __int8 v5; // cf
  _DWORD *v6; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v7; // rcx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  if ( Context )
  {
    v8 = 0;
    if ( *Context == 1314276178 )
    {
      v4 = *((_QWORD *)Context + 207);
      if ( !v4 || !*(_QWORD *)(v4 + 48) )
        goto LABEL_14;
      if ( (*((_QWORD *)Context + 121) & 1) == 0
        || (*((_QWORD *)Context + 121) & 2) != 0
        || (*((_QWORD *)Context + 121) & 4) != 0
        || (*((_QWORD *)Context + 121) & 8) != 0
        || (*((_QWORD *)Context + 121) & 0x10) != 0
        || *((_QWORD *)Context + 161) && **((_DWORD **)Context + 161) )
      {
        ++*(_DWORD *)(*((_QWORD *)Context + 207) + 4LL);
      }
      else
      {
        v5 = _interlockedbittestandset((volatile signed __int32 *)(*((_QWORD *)Context + 207) + 28LL), 1u);
        v6 = (_DWORD *)*((_QWORD *)Context + 207);
        if ( v5 )
        {
          v6[7] |= 8u;
LABEL_14:
          v7 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)Context + 69);
LABEL_15:
          ExReleaseRundownProtectionCacheAware(v7);
          return;
        }
        ++*v6;
        *(_QWORD *)(*((_QWORD *)Context + 207) + 32LL) = MEMORY[0xFFFFF78000000014];
        if ( (int)NvmeControllerIdentifyChangedNamespaces(
                    (__int64)Context,
                    *(_QWORD *)(*((_QWORD *)Context + 207) + 48LL),
                    &v8) >= 0 )
        {
          if ( v8 )
          {
            ++*(_DWORD *)(*((_QWORD *)Context + 207) + 12LL);
            IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*((_QWORD *)Context + 16) + 32LL), BusRelations);
          }
        }
        else
        {
          *(_DWORD *)(*((_QWORD *)Context + 207) + 28LL) |= 0x20u;
        }
        _interlockedbittestandreset((volatile signed __int32 *)(*((_QWORD *)Context + 207) + 28LL), 1u);
      }
      _interlockedbittestandreset((volatile signed __int32 *)(*((_QWORD *)Context + 207) + 28LL), 0);
      _interlockedbittestandreset(Context + 268, 2u);
      *(_DWORD *)(*((_QWORD *)Context + 207) + 28LL) &= ~0x100u;
      if ( _interlockedbittestandreset(Context + 268, 1u)
        && !_interlockedbittestandset(Context + 268, 2u)
        && (int)NvmeControllerGetChangedNamespaceListLog(Context, (__int64)Context, a3) < 0 )
      {
        ++*(_DWORD *)(*((_QWORD *)Context + 207) + 8LL);
        _interlockedbittestandreset(Context + 268, 2u);
      }
      v7 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)Context + 69);
      goto LABEL_15;
    }
  }
}
