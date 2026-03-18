/*
 * XREFs of NtGdiCreateClientObj @ 0x1401E2750
 * Callers:
 *     <none>
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14002504C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1400252C0 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiCreateClientObj(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 Object; // rsi
  __int64 v4; // r8
  __int64 inserted; // rax
  __int64 v6; // rdx
  _BYTE v8[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v1 = 0LL;
  if ( (a1 & 0xFF00FFFF) != 0 || (a1 & 0x600000) == 0 || (a1 & 0x1F0000) != 0x60000 )
    return 0LL;
  Object = AllocateObject(24LL, 6LL);
  if ( Object )
  {
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v8);
    inserted = 0LL;
    if ( v9 || (LOBYTE(v4) = 6, (inserted = HmgInsertObjectInternal(Object, 1LL, v4)) == 0) )
    {
      v1 = inserted;
      FreeObject(Object, 6LL);
    }
    else
    {
      v9 = Object;
      v1 = inserted | a1;
      HmgModifyHandleType(v1, v6);
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v8);
  }
  return v1;
}
