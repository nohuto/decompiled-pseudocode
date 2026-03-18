/*
 * XREFs of MiZeroPageWrite @ 0x140268964
 * Callers:
 *     CcZeroDataOnDisk @ 0x14048BF20 (CcZeroDataOnDisk.c)
 *     MmZeroPageWrite @ 0x140493B8C (MmZeroPageWrite.c)
 * Callees:
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140267BF0 (IoAllocateMdl.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MiIsRetryIoStatus @ 0x1402CBFE0 (MiIsRetryIoStatus.c)
 *     MiRetardMdl @ 0x1402F323C (MiRetardMdl.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IoSynchronousPageWriteEx @ 0x1403734C0 (IoSynchronousPageWriteEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiZeroPageWrite(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r15
  PMDL p_Mdl; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdi
  CSHORT MdlFlags; // r12
  CSHORT v11; // r12
  PMDL v12; // rdx
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r13
  CSHORT v17; // ax
  _QWORD *p_Next; // rcx
  __int64 v19; // rdx
  int v20; // r15d
  int v22; // [rsp+40h] [rbp-C0h]
  __int16 v23; // [rsp+48h] [rbp-B8h]
  __int16 Object; // [rsp+50h] [rbp-B0h] BYREF
  char v25; // [rsp+52h] [rbp-AEh]
  char v26; // [rsp+53h] [rbp-ADh]
  int v27; // [rsp+54h] [rbp-ACh]
  _QWORD v28[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v29; // [rsp+68h] [rbp-98h]
  _DWORD v30[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+78h] [rbp-88h]
  __int64 v32; // [rsp+80h] [rbp-80h]
  struct _MDL Mdl; // [rsp+90h] [rbp-70h] BYREF

  v30[1] = 0;
  v5 = a3;
  v29 = a2;
  v32 = a1;
  v23 = a3;
  v26 = 0;
  memset_0(&Mdl, 0, 0xB0uLL);
  p_Mdl = 0LL;
  v7 = (unsigned int)v5;
  v8 = (unsigned __int64)(v5 + 4095) >> 12;
  if ( a4 && (unsigned int)v5 > a4 )
    v7 = a4;
  if ( (unsigned int)v7 > 0x10000 )
    p_Mdl = IoAllocateMdl(0LL, v7, 0, 0, 0LL);
  v9 = (unsigned __int64)(v7 + 4095) >> 12;
  if ( p_Mdl )
  {
    MdlFlags = p_Mdl->MdlFlags;
  }
  else
  {
    MdlFlags = 0;
    p_Mdl = &Mdl;
    if ( (unsigned int)v9 > 0x10 )
      LODWORD(v9) = 16;
  }
  v22 = 0;
  v11 = MdlFlags | 0x4002;
  v12 = p_Mdl + 1;
  LODWORD(v13) = v9;
  while ( 1 )
  {
    v14 = v8;
    if ( (unsigned int)v13 <= (unsigned int)v8 )
      v14 = v13;
    v13 = v14;
    v15 = v14 << 12;
    if ( (_DWORD)v8 == v14 )
    {
      LODWORD(v9) = v8;
      if ( (v5 & 0xFFF) != 0 )
        v15 = (v5 & 0xFFF | (unsigned int)v15) - 4096;
    }
    v16 = (unsigned int)v15;
    p_Mdl->ByteCount = v15;
    v17 = 8 * (((unsigned __int64)(v15 + 4095) >> 12) + 6);
    p_Next = &v12->Next;
    p_Mdl->Next = 0LL;
    p_Mdl->Size = v17;
    p_Mdl->StartVa = 0LL;
    p_Mdl->ByteOffset = 0;
    p_Mdl->MdlFlags = v11;
    if ( (_DWORD)v13 )
    {
      v19 = v13;
      do
      {
        *p_Next++ = qword_140E37340;
        --v19;
      }
      while ( v19 );
    }
    Object = 0;
    v28[1] = v28;
    v27 = 0;
    v28[0] = v28;
    v30[0] = 0;
    v31 = 0LL;
    v25 = 6;
    v20 = IoSynchronousPageWriteEx(v32, (_DWORD)p_Mdl, (_DWORD)v29, (unsigned int)&Object, 0, 0LL, (__int64)v30);
    if ( v20 >= 0 )
    {
      KeWaitForSingleObject(&Object, WrPageOut, 0, 0, 0LL);
      v20 = v30[0];
    }
    if ( _bittest16(&p_Mdl->MdlFlags, 9u) )
      MiRetardMdl(p_Mdl);
    if ( (p_Mdl->MdlFlags & 1) != 0 )
      MmUnmapLockedPages(p_Mdl->MappedSystemVa, p_Mdl);
    if ( v20 < 0 )
      break;
    LODWORD(v8) = v8 - v13;
    *v29 += v16;
    if ( v22 )
    {
      --v22;
    }
    else if ( (unsigned int)v13 < (unsigned int)v9 )
    {
      LODWORD(v13) = v9;
    }
LABEL_24:
    v12 = p_Mdl + 1;
    if ( !(_DWORD)v8 )
      goto LABEL_27;
    LOWORD(v5) = v23;
  }
  v22 = 8;
  if ( (unsigned int)MiIsRetryIoStatus((unsigned int)v20, v16) && (_DWORD)v13 != 1 )
  {
    LODWORD(v13) = (unsigned int)v13 >> 1;
    goto LABEL_24;
  }
LABEL_27:
  if ( p_Mdl != &Mdl )
    IoFreeMdl(p_Mdl);
  return (unsigned int)v20;
}
