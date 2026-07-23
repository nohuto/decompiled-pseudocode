/*
 * XREFs of PfpQueryFileExtentsRequest @ 0x140743F38
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1408F5C60 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1406A75D0 (ZwQueryInformationFile.c)
 *     ZwFsControlFile @ 0x1406A7AD0 (ZwFsControlFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1406A7CD0 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     PfpPrefetchSharedStart @ 0x140936164 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedInitialize @ 0x140936270 (PfpPrefetchSharedInitialize.c)
 *     PfpPrefetchSharedDeref @ 0x1409362B8 (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchSharedCleanup @ 0x1409362F0 (PfpPrefetchSharedCleanup.c)
 *     PfpOpenHandleClose @ 0x140954390 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x1409543F8 (PfpOpenHandleCreate.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpQueryFileExtentsRequest(__int64 a1, char a2, _DWORD *a3)
{
  void *Pool2; // r14
  _DWORD *v6; // r12
  __int64 v7; // rsi
  NTSTATUS inited; // ebx
  __int64 v9; // rax
  __m128i v10; // xmm7
  __m128i v11; // xmm6
  unsigned int v12; // ebx
  __m128i v13; // xmm0
  unsigned __int64 v14; // xmm0_8
  const void *v15; // rdx
  __int64 v16; // r13
  __int64 v17; // rax
  ULONG OutputBufferLength; // r15d
  NTSTATUS v19; // eax
  ULONG Information; // r13d
  _DWORD *OutputBuffer; // rax
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  __int64 v24; // rax
  int v27; // [rsp+54h] [rbp-144h]
  ULONG v28; // [rsp+70h] [rbp-128h]
  __int64 FileInformation; // [rsp+78h] [rbp-120h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-118h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-108h] BYREF
  __m128i v32; // [rsp+A0h] [rbp-F8h]
  __m128i v33; // [rsp+B0h] [rbp-E8h]
  volatile void *Address[2]; // [rsp+C0h] [rbp-D8h]
  ULONG v35[2]; // [rsp+D0h] [rbp-C8h]
  __int64 InputBuffer; // [rsp+D8h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+E0h] [rbp-B8h]
  _DWORD *v38; // [rsp+E8h] [rbp-B0h]
  HANDLE v39; // [rsp+F0h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+F8h] [rbp-A0h]
  __int64 v41; // [rsp+108h] [rbp-90h]
  HANDLE FileHandle; // [rsp+110h] [rbp-88h] BYREF
  __int128 v43; // [rsp+118h] [rbp-80h]
  __int64 v44; // [rsp+128h] [rbp-70h]
  __int128 FsInformation; // [rsp+130h] [rbp-68h] BYREF
  __int64 v46; // [rsp+140h] [rbp-58h]

  v38 = a3;
  v37 = a1;
  IoStatusBlock = 0LL;
  InputBuffer = 0LL;
  FileInformation = 0LL;
  FsInformation = 0LL;
  v46 = 0LL;
  DestinationString = 0LL;
  Pool2 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  FileHandle = 0LL;
  v43 = 0LL;
  v44 = 0x200000000LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0x200000000LL;
  v27 = 1;
  if ( *(_DWORD *)(a1 + 24) < 0x38u )
  {
LABEL_2:
    inited = -1073741306;
    goto LABEL_59;
  }
  if ( a2 )
    ProbeForWrite(*(volatile void **)(a1 + 16), 0x38uLL, 8u);
  v9 = *(_QWORD *)(a1 + 16);
  v32 = *(__m128i *)v9;
  v10 = v32;
  v11 = *(__m128i *)(v9 + 16);
  v33 = v11;
  *(_OWORD *)Address = *(_OWORD *)(v9 + 32);
  *(_QWORD *)v35 = *(_QWORD *)(v9 + 48);
  if ( _mm_cvtsi128_si32(v32) != 2 )
  {
    inited = -1073741735;
    goto LABEL_59;
  }
  v12 = _mm_cvtsi128_si32(v11);
  if ( (v12 & 1) != 0 || v12 - 1 > 0xFFFFF || (v11.m128i_i8[4] & 1) != 0 || !v11.m128i_i32[1] || v11.m128i_i32[1] >= v12 )
    goto LABEL_58;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v12, 0x70436650u);
  if ( !Pool2 )
  {
LABEL_13:
    inited = -1073741670;
    goto LABEL_59;
  }
  v13 = _mm_srli_si128(v32, 8);
  if ( a2 )
  {
    if ( (_mm_cvtsi128_si32(v13) & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = _mm_srli_si128(v32, 8).m128i_u64[0];
    v15 = (const void *)v14;
    if ( v12 + v14 > 0x7FFFFFFF0000LL || v12 + v14 < v14 )
    {
      v12 = v33.m128i_i32[0];
      v11 = v33;
      v15 = (const void *)v32.m128i_i64[1];
      v10 = v32;
    }
  }
  else
  {
    v15 = (const void *)v13.m128i_i64[0];
  }
  memmove(Pool2, v15, v12);
  if ( *((_WORD *)Pool2 + (v12 >> 1) - 1)
    || (v16 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v11, 4)) >> 1, *((_WORD *)Pool2 + v16) != 92) )
  {
LABEL_58:
    inited = -1073741811;
    goto LABEL_59;
  }
  v17 = ExAllocatePool2(0x40uLL, 0x90uLL, 0x43536650u);
  v7 = v17;
  if ( !v17 )
    goto LABEL_13;
  PfpPrefetchSharedInitialize(v17);
  *(_DWORD *)(v7 + 56) = 15;
  *(_DWORD *)(v7 + 60) = 150;
  inited = PfpPrefetchSharedStart(v7);
  if ( inited >= 0 )
  {
    *((_WORD *)Pool2 + v16) = 0;
    inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)Pool2);
    if ( inited >= 0 )
    {
      OutputBufferLength = 32;
      inited = PfpOpenHandleCreate(
                 (unsigned int)&FileHandle,
                 v7,
                 (unsigned int)&DestinationString,
                 0,
                 1048960,
                 32,
                 0,
                 0LL);
      if ( inited >= 0 )
      {
        *((_WORD *)Pool2 + v16) = 92;
        inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)Pool2);
        if ( inited >= 0 )
        {
          inited = PfpOpenHandleCreate(
                     (unsigned int)&v39,
                     v7,
                     (unsigned int)&DestinationString,
                     0,
                     1048704,
                     32,
                     128,
                     (__int64)&FileHandle);
          if ( inited >= 0 )
          {
            v19 = ZwQueryVolumeInformationFile(
                    FileHandle,
                    &IoStatusBlock,
                    &FsInformation,
                    0x18u,
                    FileFsVolumeInformation);
            inited = v19;
            if ( v19 == 259 )
              KeBugCheckEx(0x191u, 0x1087uLL, 0LL, 0LL, 0LL);
            if ( (v19 & 0xC0000000) != 0xC0000000 )
            {
              LODWORD(Address[0]) = DWORD2(FsInformation);
              Information = v35[0];
              v28 = v35[0];
              if ( v35[0] > 0x20 )
                OutputBufferLength = v35[0];
              while ( 1 )
              {
                if ( OutputBufferLength > 0xA00000 )
                  goto LABEL_2;
                if ( v6 )
                  ExFreePoolWithTag(v6, 0);
                OutputBuffer = (_DWORD *)ExAllocatePool2(0x100uLL, OutputBufferLength, 0x65466650u);
                v6 = OutputBuffer;
                if ( !OutputBuffer )
                  goto LABEL_13;
                v22 = ZwFsControlFile(
                        v39,
                        0LL,
                        0LL,
                        0LL,
                        &IoStatusBlock,
                        0x90073u,
                        &InputBuffer,
                        8u,
                        OutputBuffer,
                        OutputBufferLength);
                inited = v22;
                if ( v22 == 259 )
                  KeBugCheckEx(0x191u, 0x10C5uLL, 0LL, 0LL, 0LL);
                if ( v22 >= 0 )
                  break;
                if ( v22 == -1073741807 )
                  goto LABEL_44;
                if ( v22 != -2147483643 )
                  goto LABEL_59;
                OutputBufferLength *= 2;
              }
              Information = IoStatusBlock.Information;
              v35[0] = IoStatusBlock.Information;
              if ( *v6 )
              {
                inited = 0;
LABEL_48:
                v24 = *(_QWORD *)(v37 + 16);
                *(__m128i *)v24 = v10;
                *(__m128i *)(v24 + 16) = v11;
                *(_OWORD *)(v24 + 32) = *(_OWORD *)Address;
                *(_QWORD *)(v24 + 48) = *(_QWORD *)v35;
                if ( inited == -1073741807 )
                {
                  v27 = 0;
                }
                else if ( v28 >= Information )
                {
                  if ( a2 )
                    ProbeForWrite(Address[1], Information, 8u);
                  memmove((void *)Address[1], v6, Information);
                }
                else
                {
                  v27 = 0;
                  inited = -1073741789;
                }
                *v38 = 56;
                goto LABEL_59;
              }
LABEL_44:
              v23 = ZwQueryInformationFile(v39, &IoStatusBlock, &FileInformation, 8u, FileInternalInformation);
              inited = v23;
              if ( v23 == 259 )
                KeBugCheckEx(0x191u, 0x1100uLL, 0LL, 0LL, 0LL);
              if ( v23 >= 0 )
              {
                v33.m128i_i64[1] = FileInformation;
                inited = -1073741807;
                v11 = v33;
                goto LABEL_48;
              }
            }
          }
        }
      }
    }
  }
LABEL_59:
  if ( v27 && (inited == -1073741807 || inited == -1073741789) )
    inited = -1073741823;
  if ( (v41 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&v39, v7);
  if ( (v44 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&FileHandle, v7);
  if ( v7 )
  {
    PfpPrefetchSharedCleanup(v7);
    PfpPrefetchSharedDeref(v7);
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)inited;
}
