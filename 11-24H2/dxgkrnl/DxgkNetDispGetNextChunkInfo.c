/*
 * XREFs of DxgkNetDispGetNextChunkInfo @ 0x1401AE300
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkMiracastGetNextChunkInfo @ 0x140080A24 (DxgkMiracastGetNextChunkInfo.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall DxgkNetDispGetNextChunkInfo(
        const void *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        ULONG64 a5,
        char *a6,
        __int64 a7)
{
  struct D3DKMT_MIRACAST_CHUNK_DATA *v10; // rdi
  __int64 v11; // rdx
  int NextChunkInfo; // ebx
  const void *v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // rsi
  void *v16; // rcx
  NTSTATUS v17; // eax
  void *v18; // r13
  void *v19; // r14
  size_t v20; // r8
  char *v21; // rax
  __int64 v22; // rsi
  unsigned int i; // edx
  PVOID v24; // rcx
  unsigned int Size; // [rsp+30h] [rbp-1C8h] BYREF
  NTSTATUS Size_4; // [rsp+34h] [rbp-1C4h]
  unsigned int Src; // [rsp+38h] [rbp-1C0h] BYREF
  int v29; // [rsp+3Ch] [rbp-1BCh]
  unsigned int v30; // [rsp+40h] [rbp-1B8h]
  struct D3DKMT_MIRACAST_CHUNK_DATA *v31; // [rsp+48h] [rbp-1B0h]
  PVOID Object; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-1A0h] BYREF
  ULONG64 v34; // [rsp+60h] [rbp-198h]
  __int64 v35; // [rsp+68h] [rbp-190h]
  ULONG64 v36; // [rsp+70h] [rbp-188h]
  char *v37; // [rsp+78h] [rbp-180h]
  __int64 v38; // [rsp+80h] [rbp-178h]
  PVOID v39[36]; // [rsp+90h] [rbp-168h] BYREF

  v30 = a2;
  v34 = a5;
  v36 = a5;
  v37 = a6;
  v35 = a7;
  v38 = a7;
  v33 = 0LL;
  Size = 0;
  v10 = 0LL;
  v31 = 0LL;
  memset(v39, 0, sizeof(v39));
  if ( a3 <= 4 )
  {
    LODWORD(v39[35]) = a3;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v33, a1, 8uLL);
    v13 = (const void *)a5;
    if ( a5 >= MmUserProbeAddress )
      v13 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&Size, v13, 4uLL);
    v14 = (unsigned int)v39[35];
    if ( LODWORD(v39[35]) )
    {
      if ( (a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + LODWORD(v39[35]) > MmUserProbeAddress || a4 + LODWORD(v39[35]) < a4 )
        v14 = (unsigned int)v39[35];
    }
    v15 = 0LL;
    v29 = 0;
    while ( (unsigned int)v15 < v14 )
    {
      v16 = *(void **)(a4 + 8 * v15);
      Object = 0LL;
      v17 = ObReferenceObjectByHandle(v16, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v39[v15 + 1] = Object;
      NextChunkInfo = v17;
      Size_4 = v17;
      if ( v17 < 0 )
      {
        WdLogSingleEntry2(3LL, *(_QWORD *)(a4 + 8 * v15), v17);
        WdLogGlobalForLineNumber = 9152;
        v18 = (void *)v34;
        v19 = (void *)v35;
        goto LABEL_21;
      }
      v15 = (unsigned int)(v15 + 1);
      v29 = v15;
      v14 = (unsigned int)v39[35];
    }
    v10 = (struct D3DKMT_MIRACAST_CHUNK_DATA *)operator new[](Size, 0x4B677844u, 64LL);
    v31 = v10;
    if ( !v10 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 9168;
      NextChunkInfo = -1073741801;
      goto LABEL_32;
    }
    Src = 0;
    NextChunkInfo = DxgkMiracastGetNextChunkInfo(&v33, v30, (__int64)v39, &Size, v10, &Src);
    Size_4 = NextChunkInfo;
    v18 = (void *)v34;
    v19 = (void *)v35;
LABEL_21:
    if ( NextChunkInfo >= 0 )
    {
      if ( Size )
      {
        v20 = Size;
        v21 = &a6[Size];
        if ( (unsigned __int64)v21 > MmUserProbeAddress || v21 <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v10, v20);
      }
      if ( (unsigned __int64)v19 >= MmUserProbeAddress )
        v19 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v19, &Src, 4uLL);
      if ( (unsigned __int64)v18 >= MmUserProbeAddress )
        v18 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v18, &Size, 4uLL);
    }
  }
  else
  {
    v11 = a3;
    NextChunkInfo = -1073741811;
    WdLogSingleEntry3(3LL, v11, 4LL, -1073741811LL);
    WdLogGlobalForLineNumber = 9127;
  }
LABEL_32:
  v22 = 0LL;
  for ( i = (unsigned int)v39[35]; (unsigned int)v22 < i; v22 = (unsigned int)(v22 + 1) )
  {
    v24 = v39[v22 + 1];
    if ( v24 )
    {
      ObfDereferenceObject(v24);
      i = (unsigned int)v39[35];
    }
  }
  if ( v10 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
  return (unsigned int)NextChunkInfo;
}
