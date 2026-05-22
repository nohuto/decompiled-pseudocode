/*
 * XREFs of ?GetDeviceInfoForDeviceId@DWMInputRouter@@UEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800551B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::GetDeviceInfoForDeviceId(DWMInputRouter *this, int a2, struct DeviceInfo **a3)
{
  __int64 v5; // r9
  unsigned __int64 i; // r10
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  struct DeviceInfo *v14; // rcx
  __int64 result; // rax
  int v16; // [rsp+10h] [rbp+10h]

  v16 = a2;
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v7 = *((unsigned __int8 *)&v16 + i);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  v8 = v5 & *((_QWORD *)this + 24);
  v9 = *((_QWORD *)this + 21);
  v10 = *((_QWORD *)this + 19);
  v11 = 2 * v8;
  v12 = *(_QWORD *)(v9 + 8 * v11 + 8);
  if ( v12 == v10 )
  {
LABEL_8:
    v12 = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)(v9 + 8 * v11);
    while ( a2 != *(_DWORD *)(v12 + 16) )
    {
      if ( v12 == v13 )
        goto LABEL_8;
      v12 = *(_QWORD *)(v12 + 8);
    }
  }
  if ( !v12 )
    v12 = v10;
  if ( v12 == v10 )
    return 2147500037LL;
  v14 = *(struct DeviceInfo **)(v12 + 24);
  result = 0LL;
  *a3 = v14;
  return result;
}
