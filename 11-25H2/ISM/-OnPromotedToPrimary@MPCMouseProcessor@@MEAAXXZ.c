/*
 * XREFs of ?OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ @ 0x1801BB200
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180012E04 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180013D54 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x1800C92A8 (-Reset@RayStabilizer@@QEAAXXZ.c)
 *     memcpy_0 @ 0x1801C7CFC (memcpy_0.c)
 */

void __fastcall MPCMouseProcessor::OnPromotedToPrimary(MPCMouseProcessor *this)
{
  struct MPCHolographicInputManager *Instance; // rax
  struct MPCHolographicInputManager *v3; // rax
  float *v4; // rax
  float v5[4]; // [rsp+20h] [rbp-D28h] BYREF
  _OWORD v6[4]; // [rsp+30h] [rbp-D18h] BYREF
  _BYTE v7[16]; // [rsp+70h] [rbp-CD8h] BYREF
  __int128 v8; // [rsp+80h] [rbp-CC8h]
  __int128 v9; // [rsp+90h] [rbp-CB8h]
  __int128 v10; // [rsp+A0h] [rbp-CA8h]
  __int128 v11; // [rsp+B0h] [rbp-C98h]

  Instance = MPCHolographicInputManager::GetInstance();
  *((_QWORD *)this + 661) = *((_QWORD *)Instance + 30);
  *((_DWORD *)this + 1324) = *((_DWORD *)Instance + 62);
  v3 = MPCHolographicInputManager::GetInstance();
  memcpy_0(v7, v3, 0xCD0uLL);
  v6[0] = v8;
  v6[1] = v9;
  v6[2] = v10;
  v6[3] = v11;
  v4 = Windows::Foundation::Numerics::transform(v5, (float *)this + 1322, (float *)v6);
  *(_QWORD *)((char *)this + 5300) = *(_QWORD *)v4;
  *((float *)this + 1327) = v4[2];
  *((_QWORD *)this + 664) = 0LL;
  *((_DWORD *)this + 1330) = 0;
  RayStabilizer::Reset((MPCMouseProcessor *)((char *)this + 472));
  *((_DWORD *)this + 1339) = 1;
}
