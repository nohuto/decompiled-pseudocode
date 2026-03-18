/*
 * XREFs of IoctlStorageStreamsReleaseId @ 0x140021B28
 * Callers:
 *     IoctlToNVMe @ 0x140003580 (IoctlToNVMe.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x140027BC8 (NVMeDirectiveStreamsReleaseId.c)
 */

__int64 __fastcall IoctlStorageStreamsReleaseId(__int64 a1, __int64 a2)
{
  _DWORD *SrbDataBuffer; // rax
  __int64 v4; // r9
  _DWORD *v5; // rdi
  unsigned __int8 v6; // cl
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 result; // rax
  _DWORD *v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v11);
  v5 = SrbDataBuffer;
  if ( *v11 < 0x28u )
  {
    *(_BYTE *)(a2 + 3) = 21;
LABEL_22:
    result = 3238002694LL;
    goto LABEL_23;
  }
  if ( SrbDataBuffer[8] < 0xCu || SrbDataBuffer[7] != 1 )
    goto LABEL_21;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v6 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v6 = *(_BYTE *)(a2 + 7);
  if ( v6 == 255 )
  {
    *(_BYTE *)(a2 + 3) = 32;
    goto LABEL_22;
  }
  if ( (*(_BYTE *)(v4 + 3728) & 3) != 3 || *(unsigned __int8 *)(v4 + 3729) != v6 )
  {
    *(_BYTE *)(a2 + 3) = 6;
    result = 3238002695LL;
    goto LABEL_23;
  }
  v7 = SrbDataBuffer[9];
  if ( !v7 || *(unsigned __int16 *)(v4 + 3730) < v7 || v7 > 0xFFFF )
  {
LABEL_21:
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_22;
  }
  if ( (unsigned int)v6 < *(_DWORD *)(v4 + 224) && (v8 = *(_QWORD *)(v4 + 8LL * v6 + 1672)) != 0 )
    v9 = *(unsigned int *)(v8 + 16);
  else
    v9 = 0LL;
  result = NVMeDirectiveStreamsReleaseId(v4, v9, *((unsigned __int16 *)SrbDataBuffer + 18));
  *(_BYTE *)(a2 + 3) = (_DWORD)result != 0 ? 4 : 1;
LABEL_23:
  v5[6] = 0;
  return result;
}
