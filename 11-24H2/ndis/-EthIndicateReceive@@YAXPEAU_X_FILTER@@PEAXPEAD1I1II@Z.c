/*
 * XREFs of ?EthIndicateReceive@@YAXPEAU_X_FILTER@@PEAXPEAD1I1II@Z @ 0x140063020
 * Callers:
 *     <none>
 * Callees:
 *     ndisLWM5IndicateReceive @ 0x140063060 (ndisLWM5IndicateReceive.c)
 */

void __fastcall EthIndicateReceive(
        struct _X_FILTER *a1,
        void *a2,
        char *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        unsigned int a8)
{
  size_t v8; // [rsp+30h] [rbp-18h]

  LODWORD(v8) = a8;
  ndisLWM5IndicateReceive((int)a1, (int)a2, (int)a4, a5, a6, a7, v8);
}
