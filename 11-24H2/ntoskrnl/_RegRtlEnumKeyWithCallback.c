/*
 * XREFs of _RegRtlEnumKeyWithCallback @ 0x14097D7A0
 * Callers:
 *     DrvDbGetObjectSubKeyList @ 0x1409250F8 (DrvDbGetObjectSubKeyList.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140A85920 (_PnpCtxRegEnumKeyWithCallback.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140235480 (RtlpGetStackLimits.c)
 *     _SysCtxInternalEnumSubkeyCallback @ 0x14045F208 (_SysCtxInternalEnumSubkeyCallback.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _RegRtlEnumKey @ 0x14097D9B4 (_RegRtlEnumKey.c)
 *     _RegRtlQueryInfoKey @ 0x14097EFD8 (_RegRtlQueryInfoKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlEnumKeyWithCallback(HANDLE KeyHandle, __int64 a2, __int64 *a3)
{
  int v3; // r15d
  unsigned int v5; // ebx
  void *v6; // rdi
  char StackLimits; // al
  unsigned int v9; // eax
  unsigned __int64 v10; // rsi
  char *v12; // r14
  __int64 Pool2; // rax
  unsigned int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // ecx
  unsigned int v19; // [rsp+30h] [rbp-59h] BYREF
  __int64 v20; // [rsp+38h] [rbp-51h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-49h] BYREF
  char v22; // [rsp+50h] [rbp-39h] BYREF

  v3 = 0;
  v19 = 0;
  v21[0] = 0LL;
  v5 = 0;
  v20 = 0LL;
  v6 = 0LL;
  StackLimits = RtlpGetStackLimits((__int64)&v20, (__int64)v21);
  if ( (unsigned __int64)v21 - (v20 & -(__int64)(StackLimits != 0)) < 0x400 )
    return (unsigned int)-1073741670;
  if ( !(unsigned int)RegRtlQueryInfoKey((_DWORD)KeyHandle, 0, (unsigned int)&v19, 0, 0LL, 0LL) )
  {
    v9 = v19;
    if ( v19 )
    {
      if ( v19 + 1 < v19 )
        return (unsigned int)-1073741675;
      v9 = v19 + 1;
    }
    v10 = 2LL * v9;
    if ( v10 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
    if ( (unsigned int)v10 > 0x50 )
      goto LABEL_16;
  }
  v12 = &v22;
  LODWORD(v10) = 80;
  while ( 1 )
  {
    v19 = (unsigned int)v10 >> 1;
    v14 = RegRtlEnumKey(KeyHandle);
    if ( v14 == -2147483622 || v14 == -1073741444 )
      break;
    if ( v14 == -1073741789 )
    {
      v10 = 2LL * v19;
      if ( v10 > 0xFFFFFFFF )
      {
        v5 = -1073741675;
        break;
      }
      v5 = 0;
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
LABEL_16:
      Pool2 = ExAllocatePool2(0x100uLL, (unsigned int)v10, 0x4C474552u);
      v6 = (void *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      v12 = (char *)Pool2;
    }
    else
    {
      if ( v14 )
      {
        v5 = v14;
        break;
      }
      *(_WORD *)&v12[2 * ((unsigned __int64)(unsigned int)v10 >> 1) - 2] = 0;
      v15 = SysCtxInternalEnumSubkeyCallback((__int64)KeyHandle, (__int64)v12, a3);
      v16 = v15;
      if ( v15 )
      {
        v17 = v15 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            if ( v18 == 1 )
              v5 = -1073741248;
            else
              v5 = -1073741595;
            break;
          }
        }
        else
        {
          v3 = 0;
        }
      }
      else
      {
        ++v3;
      }
      if ( v16 == 2 )
        break;
    }
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v5;
}
