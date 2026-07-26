/*
 * XREFs of ??0NdisPoll@@QEAA@PEAX00P6AX0PEAU_NDIS_POLL_NOTIFICATION@@@ZP6AX0PEAU_NDIS_POLL_DATA@@@Z@Z @ 0x1401552AC
 * Callers:
 *     ??$make_unique_nothrow@VNdisPoll@@AEAPEAXAEAPEAXAEAPEAXAEBQ6AXPEAXPEAU_NDIS_POLL_NOTIFICATION@@@ZAEBQ6AX0PEAU_NDIS_POLL_DATA@@@Z@wil@@YA?AV?$unique_ptr@VNdisPoll@@U?$default_delete@VNdisPoll@@@wistd@@@wistd@@AEAPEAX00AEBQ6AXPEAXPEAU_NDIS_POLL_NOTIFICATION@@@ZAEBQ6AX1PEAU_NDIS_POLL_DATA@@@Z@Z @ 0x1400DCC6C (--$make_unique_nothrow@VNdisPoll@@AEAPEAXAEAPEAXAEAPEAXAEBQ6AXPEAXPEAU_NDIS_POLL_NOTIFICATION@@@.c)
 * Callees:
 *     memset @ 0x1400EE380 (memset.c)
 */

NdisPoll *__fastcall NdisPoll::NdisPoll(
        NdisPoll *this,
        char *a2,
        void *a3,
        void *a4,
        void (*a5)(void *, struct _NDIS_POLL_NOTIFICATION *),
        void (*a6)(void *, struct _NDIS_POLL_DATA *))
{
  NdisPoll *result; // rax

  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  memset((char *)this + 168, 0, 0x98uLL);
  memset((char *)this + 320, 0, 0x48uLL);
  memset((char *)this + 392, 0, 0x48uLL);
  memset((char *)this + 464, 0, 0x48uLL);
  memset((char *)this + 536, 0, 0x40uLL);
  *((_QWORD *)this + 77) = a5;
  *((_QWORD *)this + 78) = a6;
  *((_QWORD *)this + 79) = a2 + 6008;
  result = this;
  *((_QWORD *)this + 75) = a2;
  *((_QWORD *)this + 76) = a3;
  *((_QWORD *)this + 80) = a4;
  return result;
}
