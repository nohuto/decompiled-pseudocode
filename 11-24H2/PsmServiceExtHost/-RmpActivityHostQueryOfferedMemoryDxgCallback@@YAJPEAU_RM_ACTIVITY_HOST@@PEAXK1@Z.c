/*
 * XREFs of ?RmpActivityHostQueryOfferedMemoryDxgCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18005A1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostQueryOfferedMemoryDxgCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  int v6; // ecx
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]

  v8[0] = 32LL;
  v8[2] = 0LL;
  v4 = 0LL;
  v9 = 0LL;
  v8[1] = a2;
  v6 = D3DKMTQueryProcessOfferInfo(v8);
  if ( v6 >= 0 )
    v4 = v9;
  result = 0LL;
  if ( v6 < 0 )
    result = (unsigned int)v6;
  if ( (int)result >= 0 )
  {
    *a4 += v4;
    return 0LL;
  }
  return result;
}
