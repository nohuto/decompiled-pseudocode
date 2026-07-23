/*
 * XREFs of _RegRtlDeleteTreeInternal @ 0x14097C270
 * Callers:
 *     _RegRtlDeleteTreeInternal @ 0x14097C270 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x140A64448 (_RegRtlDeletePathInternal.c)
 *     _PnpCtxRegDeleteTree @ 0x140A7F11C (_PnpCtxRegDeleteTree.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140235480 (RtlpGetStackLimits.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlDeleteTreeInternal @ 0x14097C270 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKey @ 0x14097D9B4 (_RegRtlEnumKey.c)
 *     _RegRtlQueryInfoKey @ 0x14097EFD8 (_RegRtlQueryInfoKey.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140A6464C (_RegRtlDeleteKeyTransacted.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlDeleteTreeInternal(__int64 a1, const WCHAR *a2, __int64 a3, char a4)
{
  int v4; // r14d
  void *Pool2; // rsi
  unsigned int v8; // r15d
  char StackLimits; // al
  int v11; // ebx
  unsigned __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // r9
  int v15; // eax
  unsigned int v17; // eax
  unsigned int v18; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h] BYREF
  __int64 v21; // [rsp+48h] [rbp-8h] BYREF

  v4 = 0;
  Handle = 0LL;
  v18 = 0;
  v21 = 0LL;
  Pool2 = 0LL;
  v20 = 0LL;
  v8 = 0;
  StackLimits = RtlpGetStackLimits((__int64)&v20, (__int64)&v21);
  if ( (unsigned __int64)&v21 - (v20 & -(__int64)(StackLimits != 0)) < 0x400 )
  {
    v11 = -1073741670;
    goto LABEL_9;
  }
  v11 = RegRtlOpenKeyTransacted(a1, a2, 0, 0x3001Fu, &Handle, a3);
  if ( v11 < 0 )
    goto LABEL_9;
  if ( (unsigned int)RegRtlQueryInfoKey((_DWORD)Handle, 0, (unsigned int)&v18, 0, 0LL, 0LL) )
  {
    LODWORD(v12) = 0;
    goto LABEL_6;
  }
  v17 = v18;
  if ( v18 )
  {
    if ( v18 + 1 < v18 )
    {
LABEL_20:
      v11 = -1073741675;
      goto LABEL_9;
    }
    v17 = v18 + 1;
  }
  v12 = 2LL * v17;
  if ( v12 > 0xFFFFFFFF )
    goto LABEL_20;
  v11 = 0;
  if ( (_DWORD)v12 )
    goto LABEL_31;
  while ( 1 )
  {
LABEL_6:
    while ( 1 )
    {
      v18 = (unsigned int)v12 >> 1;
      v13 = RegRtlEnumKey(Handle);
      if ( v13 == -2147483622 || v13 == -1073741444 )
        break;
      if ( v13 == -1073741789 )
      {
        v12 = 2LL * v18;
        if ( v12 > 0xFFFFFFFF )
          goto LABEL_20;
        v11 = 0;
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
LABEL_31:
        Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)v12, 0x4C474552u);
        if ( !Pool2 )
        {
          v11 = -1073741801;
          goto LABEL_9;
        }
      }
      else
      {
        if ( v13 )
          break;
        LOBYTE(v14) = a4;
        *((_WORD *)Pool2 + ((unsigned __int64)(unsigned int)v12 >> 1) - 1) = 0;
        if ( (unsigned int)RegRtlDeleteTreeInternal(Handle, Pool2, a3, v14) )
          ++v4;
        else
          v4 = 0;
      }
    }
    v15 = RegRtlDeleteKeyTransacted(a1, a2, a3);
    if ( v15 != -1073741535 )
      break;
    if ( v4 || v8 >= 0xA )
      goto LABEL_35;
    ++v8;
    v4 = 0;
  }
  if ( v15 >= 0 )
    goto LABEL_9;
LABEL_35:
  v11 = v15;
LABEL_9:
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v11;
}
