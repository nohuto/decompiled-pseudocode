/*
 * XREFs of IopTrackLink @ 0x140A21314
 * Callers:
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     IopTrackLink @ 0x140A21314 (IopTrackLink.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IoGetTransactionParameterBlock @ 0x140406320 (IoGetTransactionParameterBlock.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCompareMemoryUlong @ 0x1406B49B0 (RtlCompareMemoryUlong.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopMarshalIds @ 0x1407104D4 (IopMarshalIds.c)
 *     IopSetRemoteLink @ 0x140710E50 (IopSetRemoteLink.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     IopTrackLink @ 0x140A21314 (IopTrackLink.c)
 *     IopGetSetObjectId @ 0x140A21D40 (IopGetSetObjectId.c)
 *     IopGetVolumeId @ 0x140A21E7C (IopGetVolumeId.c)
 *     IopSendMessageToTrackService @ 0x140AA335C (IopSendMessageToTrackService.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopTrackLink(
        PFILE_OBJECT FileObject,
        __int64 a2,
        void *a3,
        unsigned int a4,
        struct _KEVENT *a5,
        KPROCESSOR_MODE AccessMode)
{
  ULONG_PTR v6; // r13
  struct _FILE_OBJECT *v9; // rsi
  unsigned int *Pool2; // rdi
  void *v11; // rcx
  __int64 v12; // rdx
  NTSTATUS v13; // ebx
  int SetObjectId; // eax
  struct _KEVENT *v15; // r13
  char v16; // r12
  int v17; // eax
  __int64 v18; // rax
  NTSTATUS v19; // eax
  __int64 v20; // rax
  int v21; // eax
  NTSTATUS v22; // eax
  int VolumeId; // eax
  int v24; // eax
  __int64 v25; // rdx
  PVOID Object; // [rsp+48h] [rbp-2B0h] BYREF
  PVOID P; // [rsp+50h] [rbp-2A8h]
  __int64 v29; // [rsp+58h] [rbp-2A0h]
  __int128 v30; // [rsp+60h] [rbp-298h] BYREF
  __m128i v31; // [rsp+70h] [rbp-288h]
  __int128 v32; // [rsp+80h] [rbp-278h]
  __int128 v33; // [rsp+90h] [rbp-268h]
  _OWORD v34[2]; // [rsp+A0h] [rbp-258h] BYREF
  __int128 v35; // [rsp+C0h] [rbp-238h] BYREF
  __m128i v36; // [rsp+D0h] [rbp-228h]
  __int128 Source; // [rsp+E0h] [rbp-218h] BYREF
  __int128 v38; // [rsp+F0h] [rbp-208h]
  _OWORD v39[2]; // [rsp+100h] [rbp-1F8h] BYREF
  __int128 v40; // [rsp+120h] [rbp-1D8h] BYREF
  __m128i v41; // [rsp+130h] [rbp-1C8h]
  __int128 v42; // [rsp+140h] [rbp-1B8h]
  __int128 v43; // [rsp+150h] [rbp-1A8h]
  _OWORD v44[4]; // [rsp+160h] [rbp-198h] BYREF
  _BYTE Src[8]; // [rsp+1A0h] [rbp-158h] BYREF

  v6 = a4;
  v29 = (__int64)a5;
  P = 0LL;
  v9 = 0LL;
  Object = 0LL;
  memset(v39, 0, 20);
  memset_0(&v35, 0, 0x40uLL);
  memset_0(&v40, 0, 0x40uLL);
  memset(v34, 0, 20);
  memset_0(v44, 0, sizeof(v44));
  memset_0(Src, 0, 0x110uLL);
  if ( AccessMode )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(0x123uLL, v6, 0x20206F49u);
    P = Pool2;
    memmove(Pool2, a3, v6);
  }
  else
  {
    Pool2 = (unsigned int *)a3;
    P = a3;
  }
  v11 = *(void **)Pool2;
  if ( !*(_QWORD *)Pool2 && AccessMode == 1 )
  {
LABEL_92:
    ExFreePoolWithTag(Pool2, 0);
    return 3221225485LL;
  }
  if ( (unsigned int)v6 < 0xC )
  {
    if ( AccessMode )
      ExFreePoolWithTag(Pool2, 0);
    return 3221225621LL;
  }
  else
  {
    v12 = Pool2[2];
    if ( (int)v6 - 12 < (unsigned int)v12 )
    {
      if ( !AccessMode )
        return 3221225485LL;
      goto LABEL_92;
    }
    if ( (unsigned __int64)(v12 + 36) <= 0x100 )
    {
      if ( v11 )
      {
        Object = 0LL;
        v13 = ObReferenceObjectByHandle(v11, 2u, (POBJECT_TYPE)IoFileObjectType, AccessMode, &Object, 0LL);
        v9 = (struct _FILE_OBJECT *)Object;
        if ( v13 < 0 )
        {
          if ( AccessMode )
            ExFreePoolWithTag(Pool2, 0);
          return (unsigned int)v13;
        }
      }
      if ( (FileObject->DeviceObject->Characteristics & 0x10) != 0 )
      {
        SetObjectId = IopGetSetObjectId(FileObject);
        v13 = SetObjectId;
        if ( SetObjectId != -1073741772 )
        {
          if ( SetObjectId < 0 )
            goto LABEL_12;
          if ( RtlCompareMemoryUlong(&Source, 0x10uLL, 0) != 16 )
          {
            if ( !IoGetTransactionParameterBlock(FileObject) )
            {
              if ( !*(_QWORD *)Pool2 )
              {
LABEL_75:
                if ( IoGetTransactionParameterBlock(FileObject)
                  || *(_QWORD *)Pool2 && IoGetTransactionParameterBlock(v9) )
                {
                  goto LABEL_78;
                }
                v22 = IopSetRemoteLink(FileObject, v25, Pool2);
                goto LABEL_64;
              }
              if ( !IoGetTransactionParameterBlock(v9) )
              {
                if ( *(_QWORD *)Pool2 )
                {
                  if ( (v9->DeviceObject->Characteristics & 0x10) != 0 )
                  {
                    v13 = IopGetSetObjectId(v9);
                    if ( v13 < 0 )
                      goto LABEL_12;
                    v13 = IopGetSetObjectId(v9);
                    if ( v13 < 0 )
                      goto LABEL_12;
                    IopMarshalIds((__int64)Src, (__int64)v34, v44, (__int64)Pool2);
                    v15 = a5;
                    v24 = IopTrackLink(FileObject, (__int64)a5, 0);
LABEL_60:
                    v13 = v24;
                    if ( v24 >= 0 )
                    {
                      v40 = v35;
                      v41 = v36;
                      v42 = Source;
                      v43 = v38;
                      v41.m128i_i8[0] = _mm_cvtsi128_si32(v36) | 1;
                      v13 = IopGetSetObjectId(v9);
                      if ( v13 < 0 )
                        IopGetSetObjectId(FileObject);
                    }
                    goto LABEL_79;
                  }
                  VolumeId = IopGetVolumeId(v9);
LABEL_56:
                  v13 = VolumeId;
                  if ( VolumeId < 0 )
                    goto LABEL_12;
                  v13 = IopGetSetObjectId(v9);
                  if ( v13 < 0 )
                    goto LABEL_12;
                  IopMarshalIds((__int64)Src, (__int64)v34, v44, (__int64)Pool2);
                  v15 = a5;
                  v13 = IopTrackLink(FileObject, (__int64)a5, 0);
                  if ( v13 < 0 )
                    goto LABEL_79;
                  v24 = IopGetSetObjectId(FileObject);
                  goto LABEL_60;
                }
                goto LABEL_75;
              }
            }
LABEL_78:
            v13 = -1072103335;
            goto LABEL_12;
          }
        }
      }
      else if ( *(_QWORD *)Pool2 )
      {
        if ( (v9->DeviceObject->Characteristics & 0x10) != 0 )
        {
          if ( (int)IopGetSetObjectId(FileObject) >= 0 && RtlCompareMemoryUlong(&Source, 0x10uLL, 0) != 16 )
          {
            if ( !IoGetTransactionParameterBlock(FileObject)
              && (!*(_QWORD *)Pool2 || !IoGetTransactionParameterBlock(v9)) )
            {
              VolumeId = IopGetSetObjectId(v9);
              goto LABEL_56;
            }
            goto LABEL_78;
          }
        }
        else
        {
          v16 = 0;
          v17 = IopGetSetObjectId(FileObject);
          v13 = v17;
          if ( v17 != -1073741772 )
          {
            if ( v17 < 0 )
              goto LABEL_12;
            if ( RtlCompareMemoryUlong(&Source, 0x10uLL, 0) != 16 )
            {
              if ( !IoGetTransactionParameterBlock(FileObject)
                && (!*(_QWORD *)Pool2 || !IoGetTransactionParameterBlock(v9)) )
              {
                v13 = IopGetVolumeId(v9);
                if ( v13 >= 0 )
                {
                  v13 = IopGetVolumeId(FileObject);
                  if ( v13 >= 0 )
                  {
                    v13 = IopGetSetObjectId(FileObject);
                    if ( v13 >= 0 )
                    {
                      v44[0] = v35;
                      v44[1] = v36;
                      v44[2] = Source;
                      v44[3] = v38;
                      v40 = v35;
                      v41 = v36;
                      v42 = Source;
                      v43 = v38;
                      v18 = *(_QWORD *)((char *)v34 + 4) - *(_QWORD *)((char *)v39 + 4);
                      if ( *(_QWORD *)((char *)v34 + 4) == *(_QWORD *)((char *)v39 + 4) )
                        v18 = *(_QWORD *)((char *)v34 + 12) - *(_QWORD *)((char *)v39 + 12);
                      if ( v18 )
                        v41.m128i_i8[0] = v36.m128i_i8[0] | 1;
                      v19 = IopGetSetObjectId(v9);
                      v13 = v19;
                      if ( v19 == -1073741635 || v19 == -1073741771 )
                      {
                        v13 = IopGetSetObjectId(v9);
                        if ( v13 >= 0 )
                          v13 = IopGetSetObjectId(v9);
                      }
                      if ( v13 < 0 )
                        goto LABEL_38;
                      v16 = 1;
                      v20 = *(_QWORD *)((char *)v34 + 4) - *(_QWORD *)((char *)v39 + 4);
                      if ( *(_QWORD *)((char *)v34 + 4) == *(_QWORD *)((char *)v39 + 4) )
                        v20 = *(_QWORD *)((char *)v34 + 12) - *(_QWORD *)((char *)v39 + 12);
                      if ( v20 )
                      {
                        IopMarshalIds((__int64)Src, (__int64)v34, v44, (__int64)Pool2);
                        v30 = v35;
                        v31 = v36;
                        v32 = Source;
                        v33 = v38;
                        v31.m128i_i8[0] = _mm_cvtsi128_si32(v36) & 0xFE;
                        v13 = IopSendMessageToTrackService(v39, &v30, Src);
                      }
                      if ( v13 < 0 )
                      {
LABEL_38:
                        v21 = 0;
                        if ( v16 )
                          v21 = IopGetSetObjectId(v9);
                        if ( v21 >= 0 )
                          IopGetSetObjectId(FileObject);
                      }
                    }
                  }
                }
                goto LABEL_12;
              }
              goto LABEL_78;
            }
          }
        }
      }
      else
      {
        v13 = IopGetVolumeId(FileObject);
        if ( v13 < 0 )
          goto LABEL_12;
        v13 = IopGetSetObjectId(FileObject);
        if ( v13 < 0 )
          goto LABEL_12;
        if ( RtlCompareMemoryUlong(&Source, 0x10uLL, 0) != 16 )
        {
          if ( IoGetTransactionParameterBlock(FileObject) || *(_QWORD *)Pool2 && IoGetTransactionParameterBlock(v9) )
            goto LABEL_78;
          v30 = v35;
          v31 = v36;
          v32 = Source;
          v33 = v38;
          v31.m128i_i8[0] = _mm_cvtsi128_si32(v36) & 0xFE;
          v22 = IopSendMessageToTrackService(v39, &v30, Pool2);
LABEL_64:
          v13 = v22;
          goto LABEL_12;
        }
      }
      v13 = 0;
LABEL_12:
      v15 = a5;
LABEL_79:
      if ( AccessMode )
        ExFreePoolWithTag(Pool2, 0);
      if ( v9 )
        ObfDereferenceObject(v9);
      KeSetEvent(v15, 0, 0);
      return (unsigned int)v13;
    }
    if ( AccessMode )
      ExFreePoolWithTag(Pool2, 0);
    return 2147483653LL;
  }
}
