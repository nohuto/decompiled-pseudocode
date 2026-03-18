/*
 * XREFs of ?GetTopologyForClass@CCD_BTL_FULL@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x140185C28
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x140379894 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x14040B2DC (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 */

__int64 CCD_BTL_FULL::GetTopologyForClass()
{
  __int64 v1; // [rsp+20h] [rbp-40h] BYREF
  int v2; // [rsp+28h] [rbp-38h]
  __int64 v3; // [rsp+2Ch] [rbp-34h]
  int v4; // [rsp+34h] [rbp-2Ch]
  int v5; // [rsp+38h] [rbp-28h]
  int v6; // [rsp+3Ch] [rbp-24h]
  int v7; // [rsp+40h] [rbp-20h]
  int v8; // [rsp+44h] [rbp-1Ch]
  int v9; // [rsp+48h] [rbp-18h]
  int v10; // [rsp+4Ch] [rbp-14h]
  int v11; // [rsp+50h] [rbp-10h]
  __int16 v12; // [rsp+54h] [rbp-Ch]
  char v13; // [rsp+56h] [rbp-Ah]
  int v14; // [rsp+58h] [rbp-8h]
  __int16 v15; // [rsp+5Ch] [rbp-4h]

  v11 = 1;
  v1 = 0LL;
  v4 = -1;
  v3 = 0LL;
  v5 = -1;
  v9 = -1;
  v6 = -2;
  v7 = -2;
  v2 = 0;
  v8 = 0;
  v10 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 4;
  v15 = 256;
  return BTL_TOPOLOGY_CONSTRUCTOR::operator()((BTL_TOPOLOGY_CONSTRUCTOR *)&v1);
}
