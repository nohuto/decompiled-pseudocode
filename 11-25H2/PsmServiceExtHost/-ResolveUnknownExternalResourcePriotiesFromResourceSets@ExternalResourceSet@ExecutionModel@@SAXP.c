/*
 * XREFs of ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180043F50
 * Callers:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C568 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 * Callees:
 *     ?HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x180044184 (-HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionM.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800442DC (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriotiesFromResourceSets(
        struct ExecutionModel::ResourceManager *a1,
        unsigned int a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4,
        struct _RM_ACTIVITY_HOST *a5)
{
  char *v5; // rdi
  __int64 v7; // r14
  signed int v8; // edx
  _QWORD *i; // r8
  __int64 v10; // rsi
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 First; // rdx
  __int64 v15; // rbp
  int v16; // ebx
  int v17; // eax
  DWORD v18; // esi
  _QWORD *Value; // rbx
  int v20; // eax
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v24; // r9
  __int64 v25; // r10
  __int64 v26; // rcx

  if ( a3 )
  {
    v5 = (char *)a4 + 16;
    v7 = a3;
    do
    {
      if ( v5[5] )
      {
        v8 = 0;
        for ( i = (_QWORD *)((char *)a5 + 1136); ; i += 3 )
        {
          if ( v8 >= 2 )
          {
            v16 = 101;
            goto LABEL_20;
          }
          if ( _bittest((const int *)&a2, v8) )
          {
            v10 = 0LL;
            if ( (_QWORD *)*i != i )
              v10 = *i - 1296LL;
            if ( v10 )
              break;
          }
          ++v8;
        }
        v11 = *(_QWORD *)(v10 + 1296);
        v12 = *(int *)(v10 + 1328);
        v13 = *(_QWORD *)(v10 + 1320);
        First = 0LL;
        if ( v11 != v13 + 8 * (v12 + 2 * (v12 + 71)) )
          First = v11 - 1296;
        if ( !First )
          First = RmpActivityHostEnumerateResourceSetGetFirst(v13, a2, (unsigned int)(v12 + 1));
        v15 = *((int *)v5 - 4);
        v16 = 101;
        while ( 1 )
        {
          v17 = *(_DWORD *)(v10 + 4 * v15 + 1488);
          v10 = First;
          if ( v16 < v17 )
            v17 = v16;
          v16 = v17;
          if ( !First )
            break;
          v24 = *(_QWORD *)(First + 1296);
          v25 = *(int *)(First + 1328);
          v26 = *(_QWORD *)(First + 1320);
          First = 0LL;
          if ( v24 != v26 + 8 * (v25 + 2 * (v25 + 71)) )
            First = v24 - 1296;
          if ( !First )
            First = RmpActivityHostEnumerateResourceSetGetFirst(v26, a2, (unsigned int)(v25 + 1));
        }
LABEL_20:
        v18 = HampLockTrackerId;
        if ( v16 >= *(_DWORD *)v5 )
          v16 = *(_DWORD *)v5;
        *(_DWORD *)v5 = v16;
        if ( v18 != -1 )
        {
          Value = TlsGetValue(v18);
          if ( (*(_QWORD *)TlsGetValue(v18) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
          *Value |= 2uLL;
          ++Value[2];
        }
        RtlAcquireSRWLockShared((char *)a5 + 64);
        if ( (unsigned int)HampHostHasExternalResourceAccess((char *)a5 + 64, *((unsigned int *)v5 - 4)) )
        {
          v20 = *(_DWORD *)v5;
          if ( *(int *)v5 > 2 )
            v20 = 2;
          *(_DWORD *)v5 = v20;
        }
        if ( HampLockTrackerId != -1 )
        {
          v21 = (__int64 *)TlsGetValue(HampLockTrackerId);
          v22 = *v21;
          if ( (*v21 & 2) == 0 )
            NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
          if ( v21[2]-- == 1 )
            *v21 = v22 & 0xFFFFFFFFFFFFFFFDuLL;
        }
        RtlReleaseSRWLockShared((char *)a5 + 64);
      }
      v5 += 24;
      --v7;
    }
    while ( v7 );
  }
}
