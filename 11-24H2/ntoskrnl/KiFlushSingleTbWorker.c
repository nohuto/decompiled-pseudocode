/*
 * XREFs of KiFlushSingleTbWorker @ 0x1405C6FC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1406AC380 (KiSetUserTbFlushPending.c)
 */

__int64 __fastcall KiFlushSingleTbWorker(__int64 a1)
{
  void *v1; // rbx
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-28h]

  v1 = *(void **)a1;
  result = (unsigned int)(*(_DWORD *)(a1 + 8) - 1);
  if ( (unsigned int)result <= 1 )
  {
    if ( KiFlushPcid )
    {
      result = (__int64)KeGetCurrentThread();
      if ( !*(_BYTE *)(*(_QWORD *)(result + 184) + 352LL) )
      {
        if ( (KiFlushPcid & 2) != 0 )
        {
          *(_QWORD *)&v3 = 1LL;
          *((_QWORD *)&v3 + 1) = *(_QWORD *)a1;
          result = 0LL;
          __asm { invpcid eax, [rsp+48h+var_28] }
        }
        else
        {
          result = KiSetUserTbFlushPending();
        }
      }
    }
  }
  __invlpg(v1);
  return result;
}
