/*
 * XREFs of PiDmObjectUpdateCachedObjectProperty @ 0x1408B8C6C
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x1409C3E70 (PiDmObjectUpdateCachedCmProperty.c)
 * Callees:
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     PiDmCacheDataFree @ 0x1408B8C20 (PiDmCacheDataFree.c)
 *     KsepCacheLock @ 0x1408B8ED0 (KsepCacheLock.c)
 *     PiDmGetObject @ 0x1408C95A0 (PiDmGetObject.c)
 *     PnpGetObjectProperty @ 0x1408CA950 (PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 *     PiDmObjectReleaseLock @ 0x1408CECD4 (PiDmObjectReleaseLock.c)
 *     PiDmCacheDataEncode @ 0x140A483AC (PiDmCacheDataEncode.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PiDmObjectUpdateCachedObjectProperty(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        void *Buf2,
        unsigned int a8)
{
  DEVPROPKEY **v10; // rsi
  unsigned int v11; // edx
  __int64 v12; // r12
  unsigned int i; // ebx
  DEVPROPKEY *v14; // r8
  __int64 v15; // rcx
  char *v16; // rdi
  __int64 v17; // r9
  unsigned int *v18; // rax
  unsigned int v19; // ebx
  int v20; // eax
  __int64 v21; // r9
  unsigned int v22; // esi
  int ObjectProperty; // eax
  void *v24; // rbx
  unsigned int v25; // eax
  __int64 v26; // [rsp+28h] [rbp-58h]
  size_t Size; // [rsp+60h] [rbp-20h] BYREF
  void *Buf1; // [rsp+68h] [rbp-18h] BYREF
  PVOID P; // [rsp+70h] [rbp-10h] BYREF
  unsigned int *v30; // [rsp+78h] [rbp-8h]
  bool v31; // [rsp+C0h] [rbp+40h]
  __int64 v32; // [rsp+C8h] [rbp+48h] BYREF

  P = 0LL;
  LODWORD(v32) = 0;
  Buf1 = 0LL;
  LODWORD(Size) = 0;
  v31 = 0;
  if ( !a4 )
  {
    switch ( a1 )
    {
      case 1u:
        v10 = &PiDmCachedDeviceKeys;
        v11 = 10;
LABEL_4:
        v12 = a5;
        for ( i = 0; ; ++i )
        {
          if ( i >= v11 )
            return;
          v14 = v10[3 * i];
          if ( *(_DWORD *)(a5 + 16) == v14->pid )
          {
            v15 = *(_QWORD *)a5 - *(_QWORD *)&v14->fmtid.Data1;
            if ( *(_QWORD *)a5 == *(_QWORD *)&v14->fmtid.Data1 )
              v15 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v14->fmtid.Data4;
            if ( !v15 )
              break;
          }
        }
        if ( (int)PiDmGetObject(a1, a2, &P) < 0 )
          return;
        v16 = (char *)P;
        KsepCacheLock(P);
        v17 = 3LL * i;
        v18 = (unsigned int *)&v16[24 * i + 112];
        v19 = *v18;
        v30 = v18;
        if ( v19 > 1 )
        {
          v22 = a6;
        }
        else
        {
          v26 = (__int64)v18;
          v20 = HIDWORD(v10[v17 + 1]);
          v21 = LODWORD(v10[v17 + 1]);
          v22 = a6;
          PiDmCacheDataEncode(a6, Buf2, a8, v21, v20, v26);
          v31 = v19 == 0;
        }
        PiDmObjectReleaseLock((ULONG_PTR)v16);
        if ( !v31 )
          goto LABEL_30;
        ObjectProperty = PnpGetObjectProperty(
                           0x5A706E50u,
                           0LL,
                           0LL,
                           v12,
                           (__int64)&v32,
                           (__int64)&Buf1,
                           (__int64)&Size,
                           0x10000);
        v24 = Buf1;
        if ( ObjectProperty == -1073741275 )
        {
          LODWORD(v32) = 0;
          if ( Buf1 )
          {
            ExFreePoolWithTag(Buf1, 0x5A706E50u);
            v24 = 0LL;
          }
          v25 = 0;
        }
        else
        {
          if ( ObjectProperty < 0 )
            goto LABEL_27;
          v25 = Size;
        }
        if ( v25 == a8 && (_DWORD)v32 == v22 )
        {
          if ( v24 )
          {
            if ( Buf2 )
              goto LABEL_24;
          }
          else if ( !Buf2 )
          {
LABEL_24:
            if ( !v25 )
              goto LABEL_28;
            if ( v24 )
            {
              if ( !memcmp(v24, Buf2, v25) )
                goto LABEL_28;
              goto LABEL_27;
            }
LABEL_30:
            PiDmObjectRelease(v16);
            return;
          }
        }
LABEL_27:
        KsepCacheLock(v16);
        PiDmCacheDataFree((__int64)v30);
        PiDmObjectReleaseLock((ULONG_PTR)v16);
LABEL_28:
        if ( v24 )
          ExFreePoolWithTag(v24, 0x5A706E50u);
        goto LABEL_30;
      case 3u:
        v10 = &PiDmCachedDeviceInterfaceKeys;
        v11 = 1;
        goto LABEL_4;
      case 5u:
        v10 = &PiDmCachedDeviceContainerKeys;
        v11 = 3;
        goto LABEL_4;
    }
  }
}
