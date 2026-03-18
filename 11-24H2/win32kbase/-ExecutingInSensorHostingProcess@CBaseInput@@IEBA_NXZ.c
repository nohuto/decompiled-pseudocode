/*
 * XREFs of ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x140064110
 * Callers:
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1400640C0 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x14020C890 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ?GetInfo@SensorLocality@CBaseInput@@QEBA?AW4SensorLocalityInfo@@XZ @ 0x14020C54C (-GetInfo@SensorLocality@CBaseInput@@QEBA-AW4SensorLocalityInfo@@XZ.c)
 */

bool __fastcall CBaseInput::ExecutingInSensorHostingProcess(CBaseInput *this)
{
  return (CBaseInput::SensorLocality::GetInfo((char *)this + 1312) & 2) != 0;
}
