/*
 * XREFs of SmKmStoreFileCreateForIoType @ 0x14079AD0C
 * Callers:
 *     SmKmStoreFileCreate @ 0x14079A858 (SmKmStoreFileCreate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     IoSetThreadHardErrorMode @ 0x1404523B0 (IoSetThreadHardErrorMode.c)
 *     ZwSetSecurityObject @ 0x1406AAAD0 (ZwSetSecurityObject.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SmKmIsVolumeIoPossible @ 0x140799E00 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileDelete @ 0x14079AFC4 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14079B2CC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 *     SmKmFileInfoCleanup @ 0x140AAC920 (SmKmFileInfoCleanup.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmKmStoreFileCreateForIoType(_OWORD *a1, const WCHAR *a2, int *a3, __int64 a4, int a5)
{
  BOOL v8; // edi
  int v9; // r14d
  BOOLEAN v10; // r12
  int File; // ebx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  HANDLE Handle[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v17; // [rsp+A0h] [rbp-60h]
  __int128 v18; // [rsp+B0h] [rbp-50h]
  __int128 v19; // [rsp+C0h] [rbp-40h]
  int v20[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v21; // [rsp+E0h] [rbp-20h]
  __int128 v22; // [rsp+F0h] [rbp-10h]
  UNICODE_STRING DestinationString; // [rsp+100h] [rbp+0h] BYREF
  int v24[4]; // [rsp+110h] [rbp+10h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v26; // [rsp+140h] [rbp+40h]
  PVOID Object; // [rsp+1A0h] [rbp+A0h] BYREF
  int v28; // [rsp+1A8h] [rbp+A8h] BYREF

  v28 = 0;
  a5 = 0;
  v26 = 0LL;
  v8 = 0;
  DestinationString = 0LL;
  *(_OWORD *)v24 = 0LL;
  *(_OWORD *)v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset_0(Handle, 0, 0x40uLL);
  if ( a3 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    a3 = &a5;
  }
  v10 = IoSetThreadHardErrorMode(0);
  RtlInitUnicodeString(&DestinationString, a2);
  File = SmKmStoreFileMakeSecurityDescriptor(SecurityDescriptor);
  if ( File >= 0 )
  {
    v20[0] = 48;
    *(_QWORD *)&v21 = &DestinationString;
    *(_QWORD *)&v22 = SecurityDescriptor;
    *(_QWORD *)&v20[2] = 0LL;
    DWORD2(v21) = 576;
    *((_QWORD *)&v22 + 1) = 0LL;
    while ( 1 )
    {
      File = IopCreateFile(
               (int)Handle,
               1310723,
               (int)v20,
               (int)v24,
               0LL,
               0x2000,
               0,
               0,
               32778,
               0LL,
               0,
               0,
               0LL,
               *a3 != 0 ? 264 : 266,
               0,
               0LL);
      if ( File < 0 )
        break;
      Object = 0LL;
      File = ObReferenceObjectByHandle(Handle[0], 0x10003u, 0LL, 0, &Object, 0LL);
      Handle[1] = Object;
      if ( File < 0 )
        break;
      v8 = !*a3 || (*(_QWORD *)&v24[2] & 0xFFFFFFFFFFFFFFFDuLL) == 0;
      File = ZwSetSecurityObject(Handle[0], 4u, SecurityDescriptor);
      if ( File < 0 )
        break;
      if ( *a3 )
        goto LABEL_23;
      File = SmKmIsVolumeIoPossible((__int64)Handle, &v28);
      if ( File < 0 )
        break;
      if ( v28 )
      {
LABEL_23:
        v13 = v17;
        *a1 = *(_OWORD *)Handle;
        v14 = v18;
        a1[1] = v13;
        v15 = v19;
        a1[2] = v14;
        a1[3] = v15;
        memset_0(Handle, 0, 0x40uLL);
        File = 0;
        goto LABEL_22;
      }
      if ( v9 )
      {
        File = -1073741637;
        break;
      }
      *a3 = 1;
      if ( v8 )
      {
        SmKmStoreFileDelete(Handle);
        v8 = 0;
      }
      SmKmFileInfoCleanup(Handle);
      memset_0(Handle, 0, 0x40uLL);
    }
    if ( v8 )
      SmKmStoreFileDelete(Handle);
  }
LABEL_22:
  SmKmFileInfoCleanup(Handle);
  IoSetThreadHardErrorMode(v10);
  return (unsigned int)File;
}
