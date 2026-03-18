/*
 * XREFs of ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1400ABAB0
 * Callers:
 *     NtGdiOpenDCW @ 0x1400675B0 (NtGdiOpenDCW.c)
 * Callees:
 *     FreeThreadBufferWithTag @ 0x14001BCC0 (FreeThreadBufferWithTag.c)
 *     AllocThreadBufferWithTag @ 0x1400ABB70 (AllocThreadBufferWithTag.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

struct _devicemodeW *__fastcall CaptureDEVMODEW(struct _devicemodeW *volatile a1)
{
  int dmSize; // esi
  int dmDriverExtra; // r14d
  __int64 v3; // rdi
  _WORD *v4; // rbx

  dmSize = a1->dmSize;
  dmDriverExtra = a1->dmDriverExtra;
  v3 = (unsigned int)(dmSize + dmDriverExtra);
  if ( (unsigned int)v3 <= 0x48 )
    return 0LL;
  v4 = (_WORD *)AllocThreadBufferWithTag((unsigned int)v3, 1886221383LL, 0LL);
  if ( v4 )
  {
    if ( (struct _devicemodeW *volatile)((char *)a1 + v3) < a1
      || (unsigned __int64)a1->dmDeviceName + v3 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v4, a1, (unsigned int)v3);
    v4[34] = dmSize;
    v4[35] = dmDriverExtra;
  }
  return (struct _devicemodeW *)v4;
}
